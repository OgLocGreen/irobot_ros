^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Changelog for package flexbe_states
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

1.2.1 (2019-06-02)
------------------
* Merge pull request `#72 <https://github.com/team-vigir/flexbe_behavior_engine/issues/72>`_ from mgruhler/fix/filemodes
  fix filemodes: those files should not be executable
* fix filemodes: those files should not be executable
* Merge remote-tracking branch 'origin/feature/sub_parameters' into develop
* Bump required flexbe_app version
* Merge remote-tracking branch 'origin/master' into develop
* Contributors: Matthias Gruhler, Philipp Schillinger

1.1.2 (2019-04-09)
------------------
* Merge remote-tracking branch 'origin/master' into develop
* Contributors: Philipp Schillinger

1.1.1 (2018-12-18)
------------------
* Merge remote-tracking branch 'origin/develop'
* Revise run dependencies
* [flexbe_states] Remove deprecated concurrent_state - use Concurrency container instead
* Merge remote-tracking branch 'origin/master' into develop
* Contributors: Philipp Schillinger

1.1.0 (2018-12-01)
------------------
* Merge branch 'develop'
* Merge branch 'feature/flexbe_app' into develop
* Update maintainer information
* Merge remote-tracking branch 'origin/fix/state_tests' into feature/flexbe_app
* [flexbe_states] Add pose test for subscriber state
* Merge remote-tracking branch 'origin/develop' into feature/flexbe_app
* Merge pull request `#52 <https://github.com/team-vigir/flexbe_behavior_engine/issues/52>`_ from ruvu/fix/catkin_lint_errors_and_warnings
  chore: ran catkin_lint and fixed warnings and errors
* Merge branch 'develop' into feature/flexbe_app
* Merge branch 'develop'
* [flexbe_states] Explicitly set message to None in SubscriberState if unavailable
* Merge remote-tracking branch 'origin/develop' into feature/flexbe_app
* Merge pull request `#42 <https://github.com/team-vigir/flexbe_behavior_engine/issues/42>`_ from alireza-hosseini/feat-string-publisher
  feat: Add String publisher state
* feat: Add String publisher state
* Merge remote-tracking branch 'origin/develop'
* [flexbe_states] Fixed documentation of text format
* Merge branch 'develop' into feature/flexbe_app
  Conflicts:
  flexbe_mirror/src/flexbe_mirror/flexbe_mirror.py
  flexbe_onboard/src/flexbe_onboard/flexbe_onboard.py
  flexbe_widget/bin/flexbe_app
  flexbe_widget/src/flexbe_widget/behavior_action_server.py
* Merge remote-tracking branch 'origin/tudarmstadt' into develop
  Conflicts:
  flexbe_widget/src/flexbe_widget/behavior_action_server.py
* Changed value parameter to input key
* Created bool publisher state
* Merge remote-tracking branch 'origin/develop'
  Conflicts:
  flexbe_onboard/src/flexbe_onboard/flexbe_onboard.py
* Added new state for publishing an empty message in a given topic
* Added new state to log data key
* [flexbe_states] Add state export tag
* Added a flexible check condition state to evaluate a predicate with multiple userdata
* Merge remote-tracking branch 'origin/develop'
* [flexbe_states] Added option to subscriber state to initially drop older messages
* [flexbe_states] Do not set subscriber to None in subscriber state if topic is not available
* [flexbe_states] Fixed subscriber state
* Merge remote-tracking branch 'origin/feature/multirobot'
* Merge remote-tracking branch 'origin/master' into feature/multirobot
  Conflicts:
  flexbe_core/src/flexbe_core/core/monitoring_state.py
  flexbe_core/src/flexbe_core/core/operatable_state.py
* [flexbe_states] Use rostest interface of flexbe_testing
* [flexbe_states] Added generic state for getting a message from any topic
* [flexbe_states] Moved logging states to flexbe_utility_states (repo: generic_flexbe_states)
* [flexbe_states] Set concurrent state to deprecated in favor of concurrency container
* [flexbe_states] Added flexbe_testing test cases for all common states
* [flexbe_states] Completed documentation of flexible_calculation_state
* Changed absolute topic references to relative
* Removed some old and unused project files
* Initial commit of software
* Contributors: Alberto Romay, Alireza, Philipp Schillinger
