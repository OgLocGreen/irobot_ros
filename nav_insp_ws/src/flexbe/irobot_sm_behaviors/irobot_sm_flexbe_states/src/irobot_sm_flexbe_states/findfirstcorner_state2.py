#!/usr/bin/env python
from flexbe_core import EventState, Logger
from flexbe_core.proxy import ProxyActionClient

from geometry_msgs.msg import PoseArray


# example import of required action
from irobot_dimensions_pckg.msg import findCornersAction, findCornersGoal

"""
Created on 10/12/2018

@author: Sara Roos
"""


class FindFirstCornerState(EventState):
	'''
	Find corner to start

	<= done 		Rotation completed.

	<= failed 		Rotation failed.
	'''

	def __init__(self):
		# See example_state.py for basic explanations.
		super(FindFirstCornerState, self).__init__(outcomes = ['done','failed'])


		
		self._topic = 'findcorners' #Mismo nombre que en el server

		# Create the action client when building the behavior.
		# This will cause the behavior to wait for the client before starting execution
		# and will trigger a timeout error if it is not available.
		# Using the proxy client provides asynchronous access to the result and status
		# and makes sure only one client is used, no matter how often this state is used in a behavior.
		
		self._client = ProxyActionClient({self._topic: findCornersAction})

		# It may happen that the action client fails to send the action goal.
		self._error = False

		



	def execute(self, userdata):
		# While this state is active, check if the action has been finished and evaluate the result.

		# Check if the client failed to send the goal.
		if self._error:
			return 'failed'

		# Check if the action has been finished
		if self._client.has_result(self._topic):
			result = self._client.get_result(self._topic)
			#userdata.n_imgs1 = 350 
			#userdata.n_imgs2 = 100
			#userdata.path = result.path

			# In this example, we also provide the amount of cleaned dishes as output key.
			#userdata.n_degrees = final_yaw

			return 'done'

		# If the action has not yet finished, no outcome will be returned and the state stays active.
		

	def on_enter(self, userdata):
		# When entering this state, we send the action goal once to let the robot start its work.

		# As documented above, we get the specification of which dishwasher to use as input key.
		# This enables a previous state to make this decision during runtime and provide the ID as its own output key.
		#n_degrees = userdata.n_degrees

		# Create the goal.
		goal = findCornersGoal()


		# Send the goal.
		self._error = False # make sure to reset the error state since a previous state execution might have failed
		try:
			self._client.send_goal(self._topic, goal)
		except Exception as e:
			# Since a state failure not necessarily causes a behavior failure, it is recommended to only print warnings, not errors.
			# Using a linebreak before appending the error log enables the operator to collapse details in the GUI.
			Logger.logwarn('Failed to send the findCorners command:\n%s' % str(e))
			self._error = True


	def on_exit(self, userdata):
		# Make sure that the action is not running when leaving this state.
		# A situation where the action would still be active is for example when the operator manually triggers an outcome.

		if not self._client.has_result(self._topic):
			self._client.cancel(self._topic)
			Logger.loginfo('Cancelled active action goal.')
		
