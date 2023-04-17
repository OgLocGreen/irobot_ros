
(cl:in-package :asdf)

(defsystem "irobot_dimensions_pckg-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :actionlib_msgs-msg
               :geometry_msgs-msg
               :std_msgs-msg
)
  :components ((:file "_package")
    (:file "findCornersAction" :depends-on ("_package_findCornersAction"))
    (:file "_package_findCornersAction" :depends-on ("_package"))
    (:file "findCornersActionFeedback" :depends-on ("_package_findCornersActionFeedback"))
    (:file "_package_findCornersActionFeedback" :depends-on ("_package"))
    (:file "findCornersActionGoal" :depends-on ("_package_findCornersActionGoal"))
    (:file "_package_findCornersActionGoal" :depends-on ("_package"))
    (:file "findCornersActionResult" :depends-on ("_package_findCornersActionResult"))
    (:file "_package_findCornersActionResult" :depends-on ("_package"))
    (:file "findCornersFeedback" :depends-on ("_package_findCornersFeedback"))
    (:file "_package_findCornersFeedback" :depends-on ("_package"))
    (:file "findCornersGoal" :depends-on ("_package_findCornersGoal"))
    (:file "_package_findCornersGoal" :depends-on ("_package"))
    (:file "findCornersResult" :depends-on ("_package_findCornersResult"))
    (:file "_package_findCornersResult" :depends-on ("_package"))
    (:file "obtainDimensionAction" :depends-on ("_package_obtainDimensionAction"))
    (:file "_package_obtainDimensionAction" :depends-on ("_package"))
    (:file "obtainDimensionActionFeedback" :depends-on ("_package_obtainDimensionActionFeedback"))
    (:file "_package_obtainDimensionActionFeedback" :depends-on ("_package"))
    (:file "obtainDimensionActionGoal" :depends-on ("_package_obtainDimensionActionGoal"))
    (:file "_package_obtainDimensionActionGoal" :depends-on ("_package"))
    (:file "obtainDimensionActionResult" :depends-on ("_package_obtainDimensionActionResult"))
    (:file "_package_obtainDimensionActionResult" :depends-on ("_package"))
    (:file "obtainDimensionFeedback" :depends-on ("_package_obtainDimensionFeedback"))
    (:file "_package_obtainDimensionFeedback" :depends-on ("_package"))
    (:file "obtainDimensionGoal" :depends-on ("_package_obtainDimensionGoal"))
    (:file "_package_obtainDimensionGoal" :depends-on ("_package"))
    (:file "obtainDimensionResult" :depends-on ("_package_obtainDimensionResult"))
    (:file "_package_obtainDimensionResult" :depends-on ("_package"))
    (:file "polygonArray" :depends-on ("_package_polygonArray"))
    (:file "_package_polygonArray" :depends-on ("_package"))
  ))