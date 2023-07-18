/*
 * File: Controller_types.h
 *
 * Code generated for Simulink model 'Controller'.
 *
 * Model version                  : 1.651
 * Simulink Coder version         : 9.1 (R2019a) 23-Nov-2018
 * C/C++ source code generated on : Thu Apr 11 12:24:34 2019
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Controller_types_h_
#define RTW_HEADER_Controller_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_jointMotionBus_
#define DEFINED_TYPEDEF_FOR_jointMotionBus_

/* Bus defining motion (in degrees) for the joints of the robot */
typedef struct {
  /* Trajectory for upper arm joint */
  real_T upperArmJointMotion;

  /* Trajectory for fore arm joint */
  real_T foreArmJointMotion;

  /* Trajectory for wrist joint */
  real_T wristJointMotion;

  /* Trajectory for gripper joint */
  real_T gripperJointMotion;

  /* Trajectory for right finger joint */
  real_T rightFingerJointMotion;

  /* Trajectory for left finger joint */
  real_T leftFingerJointMotion;
} jointMotionBus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_jointVelBus_
#define DEFINED_TYPEDEF_FOR_jointVelBus_

/* Bus defining velocity (in degrees per second) for the joints of the robot */
typedef struct {
  /* Trajectory for upper arm joint */
  real_T upperArmJointVel;

  /* Trajectory for fore arm joint */
  real_T foreArmJointVel;

  /* Trajectory for wrist joint */
  real_T wristJointVel;

  /* Trajectory for gripper joint */
  real_T gripperJointVel;

  /* Trajectory for right finger joint */
  real_T rightFingerJointVel;

  /* Trajectory for left finger joint */
  real_T leftFingerJointVel;
} jointVelBus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_jointTorqueBus_
#define DEFINED_TYPEDEF_FOR_jointTorqueBus_

/* Bus defining torque (in N*m) for the joints of the robot */
typedef struct {
  /* Torque for upper arm joint */
  real_T upperArmJointTorque;

  /* Torque for fore arm joint */
  real_T foreArmJointTorque;

  /* Torque for wrist joint */
  real_T wristJointTorque;

  /* Torque for gripper joint */
  real_T gripperJointTorque;

  /* Torque for right finger joint */
  real_T rightFingerJointTorque;

  /* Torque for left finger joint */
  real_T leftFingerJointTorque;
} jointTorqueBus;

#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_Controller_T RT_MODEL_Controller_T;

#endif                                 /* RTW_HEADER_Controller_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
