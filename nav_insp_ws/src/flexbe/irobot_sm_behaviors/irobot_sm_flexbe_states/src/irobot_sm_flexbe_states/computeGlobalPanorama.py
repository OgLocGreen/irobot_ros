#!/usr/bin/env python
from flexbe_core import EventState, Logger
from flexbe_core.proxy import ProxyActionClient

from geometry_msgs.msg import PoseArray


# example import of required action
from inspection_realsense.msg import computeGlobalPanoramaAction, computeGlobalPanoramaGoal

"""
Created on 10/12/2018

@author: Sara Roos
"""


class computeGlobalPanoramaState(EventState):
	'''
	Obtain Dimensions creating panorama from images.

	<= done 		Dimensions obtained correctly.

	<= failed 		Program failed.
	'''

	def __init__(self):
		# See example_state.py for basic explanations.
		super(computeGlobalPanoramaState, self).__init__(outcomes = ['done','failed'], input_keys = ['folder_path', 'direction','folder_pano_path', 'step','width_sheet', 'long_sheet'])


		
		self._topic = 'computeGlobalPanorama' #Mismo nombre que en el server


		# Create the action client when building the behavior.
		# This will cause the behavior to wait for the client before starting execution
		# and will trigger a timeout error if it is not available.
		# Using the proxy client provides asynchronous access to the result and status
		# and makes sure only one client is used, no matter how often this state is used in a behavior.
		
		self._client = ProxyActionClient({self._topic: computeGlobalPanoramaAction})

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
			#userdata.n_imgs = self._n_imgs

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
		goal = computeGlobalPanoramaGoal()
		goal.folder_path.data = userdata.folder_path
		goal.folder_pano_path.data = userdata.folder_pano_path
		goal.direction.data = userdata.direction
		goal.step = userdata.step
		goal.long_sheet = userdata.long_sheet
		goal.width_sheet = userdata.width_sheet
		
		# Send the goal.
		self._error = False # make sure to reset the error state since a previous state execution might have failed
		try:
			self._client.send_goal(self._topic, goal)
		except Exception as e:
			# Since a state failure not necessarily causes a behavior failure, it is recommended to only print warnings, not errors.
			# Using a linebreak before appending the error log enables the operator to collapse details in the GUI.
			Logger.logwarn('Failed to send the computeGlobalPanorama command:\n%s' % str(e))
			self._error = True


	def on_exit(self, userdata):
		# Make sure that the action is not running when leaving this state.
		# A situation where the action would still be active is for example when the operator manually triggers an outcome.

		if not self._client.has_result(self._topic):
			self._client.cancel(self._topic)
			Logger.loginfo('Cancelled active action goal.')
		
