/*
 * File: Controller.h
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

#ifndef RTW_HEADER_Controller_h_
#define RTW_HEADER_Controller_h_
#include <string.h>
#include <stddef.h>
#ifndef Controller_COMMON_INCLUDES_
# define Controller_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Controller_COMMON_INCLUDES_ */

#include "Controller_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  real_T Probe[2];                     /* '<S587>/Probe' */
  real_T Probe_i[2];                   /* '<S281>/Probe' */
  real_T Probe_ib[2];                  /* '<S592>/Probe' */
  real_T Probe_p[2];                   /* '<S286>/Probe' */
  real_T Probe_n[2];                   /* '<S597>/Probe' */
  real_T Probe_pi[2];                  /* '<S291>/Probe' */
  real_T Probe_g[2];                   /* '<S602>/Probe' */
  real_T Probe_ni[2];                  /* '<S296>/Probe' */
  real_T Probe_l[2];                   /* '<S607>/Probe' */
  real_T Probe_h[2];                   /* '<S301>/Probe' */
  real_T Probe_pq[2];                  /* '<S612>/Probe' */
  real_T Probe_hr[2];                  /* '<S306>/Probe' */
} B_Controller_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T Integrator_DSTATE;            /* '<S309>/Integrator' */
  real_T Integrator_DSTATE_j;          /* '<S265>/Integrator' */
  real_T Filter_DSTATE;                /* '<S260>/Filter' */
  real_T Integrator_DSTATE_k;          /* '<S615>/Integrator' */
  real_T Integrator_DSTATE_j1;         /* '<S571>/Integrator' */
  real_T Integrator_DSTATE_a;          /* '<S284>/Integrator' */
  real_T Integrator_DSTATE_k1;         /* '<S45>/Integrator' */
  real_T Filter_DSTATE_h;              /* '<S40>/Filter' */
  real_T Integrator_DSTATE_b;          /* '<S590>/Integrator' */
  real_T Integrator_DSTATE_f;          /* '<S351>/Integrator' */
  real_T Integrator_DSTATE_c;          /* '<S289>/Integrator' */
  real_T Integrator_DSTATE_o;          /* '<S89>/Integrator' */
  real_T Filter_DSTATE_hg;             /* '<S84>/Filter' */
  real_T Integrator_DSTATE_o3;         /* '<S595>/Integrator' */
  real_T Integrator_DSTATE_oy;         /* '<S395>/Integrator' */
  real_T Integrator_DSTATE_m;          /* '<S294>/Integrator' */
  real_T Integrator_DSTATE_h;          /* '<S133>/Integrator' */
  real_T Filter_DSTATE_g;              /* '<S128>/Filter' */
  real_T Integrator_DSTATE_k2;         /* '<S600>/Integrator' */
  real_T Integrator_DSTATE_jb;         /* '<S439>/Integrator' */
  real_T Integrator_DSTATE_hl;         /* '<S299>/Integrator' */
  real_T Integrator_DSTATE_e;          /* '<S177>/Integrator' */
  real_T Filter_DSTATE_n;              /* '<S172>/Filter' */
  real_T Integrator_DSTATE_km;         /* '<S605>/Integrator' */
  real_T Integrator_DSTATE_jr;         /* '<S483>/Integrator' */
  real_T Integrator_DSTATE_d;          /* '<S304>/Integrator' */
  real_T Integrator_DSTATE_p;          /* '<S221>/Integrator' */
  real_T Filter_DSTATE_p;              /* '<S216>/Filter' */
  real_T Integrator_DSTATE_en;         /* '<S610>/Integrator' */
  real_T Integrator_DSTATE_ed;         /* '<S527>/Integrator' */
  int8_T Integrator_PrevResetState;    /* '<S309>/Integrator' */
  int8_T Integrator_PrevResetState_c;  /* '<S615>/Integrator' */
  int8_T Integrator_PrevResetState_cw; /* '<S284>/Integrator' */
  int8_T Integrator_PrevResetState_k;  /* '<S590>/Integrator' */
  int8_T Integrator_PrevResetState_f;  /* '<S289>/Integrator' */
  int8_T Integrator_PrevResetState_cl; /* '<S595>/Integrator' */
  int8_T Integrator_PrevResetState_m;  /* '<S294>/Integrator' */
  int8_T Integrator_PrevResetState_g;  /* '<S600>/Integrator' */
  int8_T Integrator_PrevResetState_m4; /* '<S299>/Integrator' */
  int8_T Integrator_PrevResetState_l;  /* '<S605>/Integrator' */
  int8_T Integrator_PrevResetState_l1; /* '<S304>/Integrator' */
  int8_T Integrator_PrevResetState_e;  /* '<S610>/Integrator' */
  uint8_T Integrator_IC_LOADING;       /* '<S309>/Integrator' */
  uint8_T Integrator_IC_LOADING_n;     /* '<S615>/Integrator' */
  uint8_T Integrator_IC_LOADING_m;     /* '<S284>/Integrator' */
  uint8_T Integrator_IC_LOADING_b;     /* '<S590>/Integrator' */
  uint8_T Integrator_IC_LOADING_g;     /* '<S289>/Integrator' */
  uint8_T Integrator_IC_LOADING_l;     /* '<S595>/Integrator' */
  uint8_T Integrator_IC_LOADING_i;     /* '<S294>/Integrator' */
  uint8_T Integrator_IC_LOADING_gz;    /* '<S600>/Integrator' */
  uint8_T Integrator_IC_LOADING_o;     /* '<S299>/Integrator' */
  uint8_T Integrator_IC_LOADING_i2;    /* '<S605>/Integrator' */
  uint8_T Integrator_IC_LOADING_d;     /* '<S304>/Integrator' */
  uint8_T Integrator_IC_LOADING_h;     /* '<S610>/Integrator' */
} DW_Controller_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  jointMotionBus qRef;                 /* '<Root>/jointsAngleReference' */
  jointMotionBus q;                    /* '<Root>/jointsAngle' */
  jointVelBus w;                       /* '<Root>/jointsVelocity' */
} ExtU_Controller_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  jointTorqueBus torqueReference;      /* '<Root>/torqueReference' */
} ExtY_Controller_T;

/* Real-time Model Data Structure */
struct tag_RTM_Controller_T {
  const char_T * volatile errorStatus;
};

/* Block signals (default storage) */
extern B_Controller_T Controller_B;

/* Block states (default storage) */
extern DW_Controller_T Controller_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_Controller_T Controller_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Controller_T Controller_Y;

/* External data declarations for dependent source files */
extern const jointTorqueBus Controller_rtZjointTorqueBus;/* jointTorqueBus ground */

/* Model entry point functions */
extern void Controller_initialize(void);
extern void Controller_step(void);
extern void Controller_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Controller_T *const Controller_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Note that this particular code originates from a subsystem build,
 * and has its own system numbers different from the parent model.
 * Refer to the system hierarchy for this subsystem below, and use the
 * MATLAB hilite_system command to trace the generated code back
 * to the parent model.  For example,
 *
 * hilite_system('closedLoop_tuned/Controller')    - opens subsystem closedLoop_tuned/Controller
 * hilite_system('closedLoop_tuned/Controller/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'closedLoop_tuned'
 * '<S1>'   : 'closedLoop_tuned/Controller'
 * '<S2>'   : 'closedLoop_tuned/Controller/Servomotor Position Controller'
 * '<S3>'   : 'closedLoop_tuned/Controller/Servomotor Speed Controller'
 * '<S4>'   : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller'
 * '<S5>'   : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller1'
 * '<S6>'   : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller2'
 * '<S7>'   : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller3'
 * '<S8>'   : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller4'
 * '<S9>'   : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller5'
 * '<S10>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/filter'
 * '<S11>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/filter1'
 * '<S12>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/filter2'
 * '<S13>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/filter3'
 * '<S14>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/filter4'
 * '<S15>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/filter5'
 * '<S16>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller/Anti-windup'
 * '<S17>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller/D Gain'
 * '<S18>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller/Filter'
 * '<S19>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller/Filter ICs'
 * '<S20>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller/I Gain'
 * '<S21>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller/Ideal P Gain'
 * '<S22>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller/Ideal P Gain Fdbk'
 * '<S23>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller/Integrator'
 * '<S24>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller/Integrator ICs'
 * '<S25>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller/N Copy'
 * '<S26>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller/N Gain'
 * '<S27>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller/P Copy'
 * '<S28>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller/Parallel P Gain'
 * '<S29>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller/Reset Signal'
 * '<S30>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller/Saturation'
 * '<S31>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller/Saturation Fdbk'
 * '<S32>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller/Sum'
 * '<S33>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller/Sum Fdbk'
 * '<S34>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller/Tracking Mode'
 * '<S35>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller/Tracking Mode Sum'
 * '<S36>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller/postSat Signal'
 * '<S37>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller/preSat Signal'
 * '<S38>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller/Anti-windup/Passthrough'
 * '<S39>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller/D Gain/Internal Parameters'
 * '<S40>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller/Filter/Disc. Forward Euler Filter'
 * '<S41>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller/Filter ICs/Internal IC - Filter'
 * '<S42>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller/I Gain/Internal Parameters'
 * '<S43>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller/Ideal P Gain/Passthrough'
 * '<S44>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S45>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller/Integrator/Discrete'
 * '<S46>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller/Integrator ICs/Internal IC'
 * '<S47>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller/N Copy/Disabled'
 * '<S48>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller/N Gain/Internal Parameters'
 * '<S49>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller/P Copy/Disabled'
 * '<S50>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller/Parallel P Gain/Internal Parameters'
 * '<S51>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller/Reset Signal/Disabled'
 * '<S52>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller/Saturation/Passthrough'
 * '<S53>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller/Saturation Fdbk/Disabled'
 * '<S54>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller/Sum/Sum_PID'
 * '<S55>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller/Sum Fdbk/Disabled'
 * '<S56>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller/Tracking Mode/Disabled'
 * '<S57>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller/Tracking Mode Sum/Passthrough'
 * '<S58>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller/postSat Signal/Forward_Path'
 * '<S59>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller/preSat Signal/Forward_Path'
 * '<S60>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller1/Anti-windup'
 * '<S61>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller1/D Gain'
 * '<S62>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller1/Filter'
 * '<S63>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller1/Filter ICs'
 * '<S64>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller1/I Gain'
 * '<S65>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller1/Ideal P Gain'
 * '<S66>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller1/Ideal P Gain Fdbk'
 * '<S67>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller1/Integrator'
 * '<S68>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller1/Integrator ICs'
 * '<S69>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller1/N Copy'
 * '<S70>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller1/N Gain'
 * '<S71>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller1/P Copy'
 * '<S72>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller1/Parallel P Gain'
 * '<S73>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller1/Reset Signal'
 * '<S74>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller1/Saturation'
 * '<S75>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller1/Saturation Fdbk'
 * '<S76>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller1/Sum'
 * '<S77>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller1/Sum Fdbk'
 * '<S78>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller1/Tracking Mode'
 * '<S79>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller1/Tracking Mode Sum'
 * '<S80>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller1/postSat Signal'
 * '<S81>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller1/preSat Signal'
 * '<S82>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller1/Anti-windup/Passthrough'
 * '<S83>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller1/D Gain/Internal Parameters'
 * '<S84>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller1/Filter/Disc. Forward Euler Filter'
 * '<S85>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller1/Filter ICs/Internal IC - Filter'
 * '<S86>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller1/I Gain/Internal Parameters'
 * '<S87>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller1/Ideal P Gain/Passthrough'
 * '<S88>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller1/Ideal P Gain Fdbk/Disabled'
 * '<S89>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller1/Integrator/Discrete'
 * '<S90>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller1/Integrator ICs/Internal IC'
 * '<S91>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller1/N Copy/Disabled'
 * '<S92>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller1/N Gain/Internal Parameters'
 * '<S93>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller1/P Copy/Disabled'
 * '<S94>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller1/Parallel P Gain/Internal Parameters'
 * '<S95>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller1/Reset Signal/Disabled'
 * '<S96>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller1/Saturation/Passthrough'
 * '<S97>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller1/Saturation Fdbk/Disabled'
 * '<S98>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller1/Sum/Sum_PID'
 * '<S99>'  : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller1/Sum Fdbk/Disabled'
 * '<S100>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller1/Tracking Mode/Disabled'
 * '<S101>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller1/Tracking Mode Sum/Passthrough'
 * '<S102>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller1/postSat Signal/Forward_Path'
 * '<S103>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller1/preSat Signal/Forward_Path'
 * '<S104>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller2/Anti-windup'
 * '<S105>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller2/D Gain'
 * '<S106>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller2/Filter'
 * '<S107>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller2/Filter ICs'
 * '<S108>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller2/I Gain'
 * '<S109>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller2/Ideal P Gain'
 * '<S110>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller2/Ideal P Gain Fdbk'
 * '<S111>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller2/Integrator'
 * '<S112>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller2/Integrator ICs'
 * '<S113>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller2/N Copy'
 * '<S114>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller2/N Gain'
 * '<S115>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller2/P Copy'
 * '<S116>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller2/Parallel P Gain'
 * '<S117>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller2/Reset Signal'
 * '<S118>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller2/Saturation'
 * '<S119>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller2/Saturation Fdbk'
 * '<S120>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller2/Sum'
 * '<S121>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller2/Sum Fdbk'
 * '<S122>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller2/Tracking Mode'
 * '<S123>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller2/Tracking Mode Sum'
 * '<S124>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller2/postSat Signal'
 * '<S125>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller2/preSat Signal'
 * '<S126>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller2/Anti-windup/Passthrough'
 * '<S127>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller2/D Gain/Internal Parameters'
 * '<S128>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller2/Filter/Disc. Forward Euler Filter'
 * '<S129>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller2/Filter ICs/Internal IC - Filter'
 * '<S130>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller2/I Gain/Internal Parameters'
 * '<S131>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller2/Ideal P Gain/Passthrough'
 * '<S132>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller2/Ideal P Gain Fdbk/Disabled'
 * '<S133>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller2/Integrator/Discrete'
 * '<S134>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller2/Integrator ICs/Internal IC'
 * '<S135>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller2/N Copy/Disabled'
 * '<S136>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller2/N Gain/Internal Parameters'
 * '<S137>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller2/P Copy/Disabled'
 * '<S138>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller2/Parallel P Gain/Internal Parameters'
 * '<S139>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller2/Reset Signal/Disabled'
 * '<S140>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller2/Saturation/Passthrough'
 * '<S141>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller2/Saturation Fdbk/Disabled'
 * '<S142>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller2/Sum/Sum_PID'
 * '<S143>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller2/Sum Fdbk/Disabled'
 * '<S144>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller2/Tracking Mode/Disabled'
 * '<S145>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller2/Tracking Mode Sum/Passthrough'
 * '<S146>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller2/postSat Signal/Forward_Path'
 * '<S147>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller2/preSat Signal/Forward_Path'
 * '<S148>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller3/Anti-windup'
 * '<S149>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller3/D Gain'
 * '<S150>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller3/Filter'
 * '<S151>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller3/Filter ICs'
 * '<S152>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller3/I Gain'
 * '<S153>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller3/Ideal P Gain'
 * '<S154>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller3/Ideal P Gain Fdbk'
 * '<S155>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller3/Integrator'
 * '<S156>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller3/Integrator ICs'
 * '<S157>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller3/N Copy'
 * '<S158>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller3/N Gain'
 * '<S159>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller3/P Copy'
 * '<S160>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller3/Parallel P Gain'
 * '<S161>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller3/Reset Signal'
 * '<S162>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller3/Saturation'
 * '<S163>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller3/Saturation Fdbk'
 * '<S164>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller3/Sum'
 * '<S165>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller3/Sum Fdbk'
 * '<S166>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller3/Tracking Mode'
 * '<S167>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller3/Tracking Mode Sum'
 * '<S168>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller3/postSat Signal'
 * '<S169>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller3/preSat Signal'
 * '<S170>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller3/Anti-windup/Passthrough'
 * '<S171>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller3/D Gain/Internal Parameters'
 * '<S172>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller3/Filter/Disc. Forward Euler Filter'
 * '<S173>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller3/Filter ICs/Internal IC - Filter'
 * '<S174>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller3/I Gain/Internal Parameters'
 * '<S175>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller3/Ideal P Gain/Passthrough'
 * '<S176>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller3/Ideal P Gain Fdbk/Disabled'
 * '<S177>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller3/Integrator/Discrete'
 * '<S178>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller3/Integrator ICs/Internal IC'
 * '<S179>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller3/N Copy/Disabled'
 * '<S180>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller3/N Gain/Internal Parameters'
 * '<S181>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller3/P Copy/Disabled'
 * '<S182>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller3/Parallel P Gain/Internal Parameters'
 * '<S183>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller3/Reset Signal/Disabled'
 * '<S184>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller3/Saturation/Passthrough'
 * '<S185>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller3/Saturation Fdbk/Disabled'
 * '<S186>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller3/Sum/Sum_PID'
 * '<S187>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller3/Sum Fdbk/Disabled'
 * '<S188>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller3/Tracking Mode/Disabled'
 * '<S189>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller3/Tracking Mode Sum/Passthrough'
 * '<S190>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller3/postSat Signal/Forward_Path'
 * '<S191>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller3/preSat Signal/Forward_Path'
 * '<S192>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller4/Anti-windup'
 * '<S193>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller4/D Gain'
 * '<S194>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller4/Filter'
 * '<S195>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller4/Filter ICs'
 * '<S196>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller4/I Gain'
 * '<S197>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller4/Ideal P Gain'
 * '<S198>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller4/Ideal P Gain Fdbk'
 * '<S199>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller4/Integrator'
 * '<S200>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller4/Integrator ICs'
 * '<S201>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller4/N Copy'
 * '<S202>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller4/N Gain'
 * '<S203>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller4/P Copy'
 * '<S204>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller4/Parallel P Gain'
 * '<S205>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller4/Reset Signal'
 * '<S206>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller4/Saturation'
 * '<S207>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller4/Saturation Fdbk'
 * '<S208>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller4/Sum'
 * '<S209>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller4/Sum Fdbk'
 * '<S210>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller4/Tracking Mode'
 * '<S211>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller4/Tracking Mode Sum'
 * '<S212>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller4/postSat Signal'
 * '<S213>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller4/preSat Signal'
 * '<S214>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller4/Anti-windup/Passthrough'
 * '<S215>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller4/D Gain/Internal Parameters'
 * '<S216>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller4/Filter/Disc. Forward Euler Filter'
 * '<S217>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller4/Filter ICs/Internal IC - Filter'
 * '<S218>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller4/I Gain/Internal Parameters'
 * '<S219>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller4/Ideal P Gain/Passthrough'
 * '<S220>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller4/Ideal P Gain Fdbk/Disabled'
 * '<S221>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller4/Integrator/Discrete'
 * '<S222>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller4/Integrator ICs/Internal IC'
 * '<S223>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller4/N Copy/Disabled'
 * '<S224>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller4/N Gain/Internal Parameters'
 * '<S225>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller4/P Copy/Disabled'
 * '<S226>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller4/Parallel P Gain/Internal Parameters'
 * '<S227>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller4/Reset Signal/Disabled'
 * '<S228>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller4/Saturation/Passthrough'
 * '<S229>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller4/Saturation Fdbk/Disabled'
 * '<S230>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller4/Sum/Sum_PID'
 * '<S231>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller4/Sum Fdbk/Disabled'
 * '<S232>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller4/Tracking Mode/Disabled'
 * '<S233>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller4/Tracking Mode Sum/Passthrough'
 * '<S234>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller4/postSat Signal/Forward_Path'
 * '<S235>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller4/preSat Signal/Forward_Path'
 * '<S236>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller5/Anti-windup'
 * '<S237>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller5/D Gain'
 * '<S238>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller5/Filter'
 * '<S239>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller5/Filter ICs'
 * '<S240>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller5/I Gain'
 * '<S241>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller5/Ideal P Gain'
 * '<S242>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller5/Ideal P Gain Fdbk'
 * '<S243>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller5/Integrator'
 * '<S244>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller5/Integrator ICs'
 * '<S245>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller5/N Copy'
 * '<S246>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller5/N Gain'
 * '<S247>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller5/P Copy'
 * '<S248>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller5/Parallel P Gain'
 * '<S249>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller5/Reset Signal'
 * '<S250>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller5/Saturation'
 * '<S251>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller5/Saturation Fdbk'
 * '<S252>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller5/Sum'
 * '<S253>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller5/Sum Fdbk'
 * '<S254>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller5/Tracking Mode'
 * '<S255>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller5/Tracking Mode Sum'
 * '<S256>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller5/postSat Signal'
 * '<S257>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller5/preSat Signal'
 * '<S258>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller5/Anti-windup/Passthrough'
 * '<S259>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller5/D Gain/Internal Parameters'
 * '<S260>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller5/Filter/Disc. Forward Euler Filter'
 * '<S261>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller5/Filter ICs/Internal IC - Filter'
 * '<S262>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller5/I Gain/Internal Parameters'
 * '<S263>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller5/Ideal P Gain/Passthrough'
 * '<S264>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller5/Ideal P Gain Fdbk/Disabled'
 * '<S265>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller5/Integrator/Discrete'
 * '<S266>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller5/Integrator ICs/Internal IC'
 * '<S267>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller5/N Copy/Disabled'
 * '<S268>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller5/N Gain/Internal Parameters'
 * '<S269>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller5/P Copy/Disabled'
 * '<S270>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller5/Parallel P Gain/Internal Parameters'
 * '<S271>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller5/Reset Signal/Disabled'
 * '<S272>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller5/Saturation/Passthrough'
 * '<S273>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller5/Saturation Fdbk/Disabled'
 * '<S274>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller5/Sum/Sum_PID'
 * '<S275>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller5/Sum Fdbk/Disabled'
 * '<S276>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller5/Tracking Mode/Disabled'
 * '<S277>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller5/Tracking Mode Sum/Passthrough'
 * '<S278>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller5/postSat Signal/Forward_Path'
 * '<S279>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/PID Controller5/preSat Signal/Forward_Path'
 * '<S280>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/filter/Low-Pass Filter (Discrete or Continuous)'
 * '<S281>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/filter/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant'
 * '<S282>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/filter/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)'
 * '<S283>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/filter/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Compare To Zero'
 * '<S284>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/filter/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete'
 * '<S285>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/filter1/Low-Pass Filter (Discrete or Continuous)'
 * '<S286>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/filter1/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant'
 * '<S287>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/filter1/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)'
 * '<S288>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/filter1/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Compare To Zero'
 * '<S289>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/filter1/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete'
 * '<S290>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/filter2/Low-Pass Filter (Discrete or Continuous)'
 * '<S291>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/filter2/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant'
 * '<S292>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/filter2/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)'
 * '<S293>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/filter2/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Compare To Zero'
 * '<S294>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/filter2/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete'
 * '<S295>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/filter3/Low-Pass Filter (Discrete or Continuous)'
 * '<S296>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/filter3/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant'
 * '<S297>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/filter3/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)'
 * '<S298>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/filter3/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Compare To Zero'
 * '<S299>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/filter3/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete'
 * '<S300>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/filter4/Low-Pass Filter (Discrete or Continuous)'
 * '<S301>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/filter4/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant'
 * '<S302>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/filter4/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)'
 * '<S303>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/filter4/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Compare To Zero'
 * '<S304>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/filter4/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete'
 * '<S305>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/filter5/Low-Pass Filter (Discrete or Continuous)'
 * '<S306>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/filter5/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant'
 * '<S307>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/filter5/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)'
 * '<S308>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/filter5/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Compare To Zero'
 * '<S309>' : 'closedLoop_tuned/Controller/Servomotor Position Controller/filter5/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete'
 * '<S310>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller'
 * '<S311>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller1'
 * '<S312>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller2'
 * '<S313>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller3'
 * '<S314>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller4'
 * '<S315>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller5'
 * '<S316>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/filter'
 * '<S317>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/filter1'
 * '<S318>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/filter2'
 * '<S319>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/filter3'
 * '<S320>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/filter4'
 * '<S321>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/filter5'
 * '<S322>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller/Anti-windup'
 * '<S323>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller/D Gain'
 * '<S324>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller/Filter'
 * '<S325>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller/Filter ICs'
 * '<S326>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller/I Gain'
 * '<S327>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller/Ideal P Gain'
 * '<S328>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller/Ideal P Gain Fdbk'
 * '<S329>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller/Integrator'
 * '<S330>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller/Integrator ICs'
 * '<S331>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller/N Copy'
 * '<S332>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller/N Gain'
 * '<S333>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller/P Copy'
 * '<S334>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller/Parallel P Gain'
 * '<S335>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller/Reset Signal'
 * '<S336>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller/Saturation'
 * '<S337>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller/Saturation Fdbk'
 * '<S338>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller/Sum'
 * '<S339>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller/Sum Fdbk'
 * '<S340>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller/Tracking Mode'
 * '<S341>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller/Tracking Mode Sum'
 * '<S342>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller/postSat Signal'
 * '<S343>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller/preSat Signal'
 * '<S344>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller/Anti-windup/Passthrough'
 * '<S345>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller/D Gain/Disabled'
 * '<S346>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller/Filter/Disabled'
 * '<S347>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller/Filter ICs/Disabled'
 * '<S348>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller/I Gain/Internal Parameters'
 * '<S349>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller/Ideal P Gain/Passthrough'
 * '<S350>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S351>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller/Integrator/Discrete'
 * '<S352>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller/Integrator ICs/Internal IC'
 * '<S353>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller/N Copy/Disabled wSignal Specification'
 * '<S354>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller/N Gain/Disabled'
 * '<S355>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller/P Copy/Disabled'
 * '<S356>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller/Parallel P Gain/Internal Parameters'
 * '<S357>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller/Reset Signal/Disabled'
 * '<S358>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller/Saturation/Passthrough'
 * '<S359>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller/Saturation Fdbk/Disabled'
 * '<S360>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller/Sum/Sum_PI'
 * '<S361>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller/Sum Fdbk/Disabled'
 * '<S362>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller/Tracking Mode/Disabled'
 * '<S363>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller/Tracking Mode Sum/Passthrough'
 * '<S364>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller/postSat Signal/Forward_Path'
 * '<S365>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller/preSat Signal/Forward_Path'
 * '<S366>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller1/Anti-windup'
 * '<S367>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller1/D Gain'
 * '<S368>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller1/Filter'
 * '<S369>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller1/Filter ICs'
 * '<S370>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller1/I Gain'
 * '<S371>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller1/Ideal P Gain'
 * '<S372>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller1/Ideal P Gain Fdbk'
 * '<S373>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller1/Integrator'
 * '<S374>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller1/Integrator ICs'
 * '<S375>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller1/N Copy'
 * '<S376>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller1/N Gain'
 * '<S377>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller1/P Copy'
 * '<S378>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller1/Parallel P Gain'
 * '<S379>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller1/Reset Signal'
 * '<S380>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller1/Saturation'
 * '<S381>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller1/Saturation Fdbk'
 * '<S382>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller1/Sum'
 * '<S383>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller1/Sum Fdbk'
 * '<S384>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller1/Tracking Mode'
 * '<S385>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller1/Tracking Mode Sum'
 * '<S386>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller1/postSat Signal'
 * '<S387>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller1/preSat Signal'
 * '<S388>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller1/Anti-windup/Passthrough'
 * '<S389>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller1/D Gain/Disabled'
 * '<S390>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller1/Filter/Disabled'
 * '<S391>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller1/Filter ICs/Disabled'
 * '<S392>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller1/I Gain/Internal Parameters'
 * '<S393>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller1/Ideal P Gain/Passthrough'
 * '<S394>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller1/Ideal P Gain Fdbk/Disabled'
 * '<S395>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller1/Integrator/Discrete'
 * '<S396>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller1/Integrator ICs/Internal IC'
 * '<S397>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller1/N Copy/Disabled wSignal Specification'
 * '<S398>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller1/N Gain/Disabled'
 * '<S399>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller1/P Copy/Disabled'
 * '<S400>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller1/Parallel P Gain/Internal Parameters'
 * '<S401>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller1/Reset Signal/Disabled'
 * '<S402>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller1/Saturation/Passthrough'
 * '<S403>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller1/Saturation Fdbk/Disabled'
 * '<S404>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller1/Sum/Sum_PI'
 * '<S405>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller1/Sum Fdbk/Disabled'
 * '<S406>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller1/Tracking Mode/Disabled'
 * '<S407>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller1/Tracking Mode Sum/Passthrough'
 * '<S408>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller1/postSat Signal/Forward_Path'
 * '<S409>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller1/preSat Signal/Forward_Path'
 * '<S410>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller2/Anti-windup'
 * '<S411>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller2/D Gain'
 * '<S412>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller2/Filter'
 * '<S413>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller2/Filter ICs'
 * '<S414>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller2/I Gain'
 * '<S415>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller2/Ideal P Gain'
 * '<S416>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller2/Ideal P Gain Fdbk'
 * '<S417>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller2/Integrator'
 * '<S418>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller2/Integrator ICs'
 * '<S419>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller2/N Copy'
 * '<S420>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller2/N Gain'
 * '<S421>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller2/P Copy'
 * '<S422>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller2/Parallel P Gain'
 * '<S423>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller2/Reset Signal'
 * '<S424>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller2/Saturation'
 * '<S425>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller2/Saturation Fdbk'
 * '<S426>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller2/Sum'
 * '<S427>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller2/Sum Fdbk'
 * '<S428>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller2/Tracking Mode'
 * '<S429>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller2/Tracking Mode Sum'
 * '<S430>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller2/postSat Signal'
 * '<S431>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller2/preSat Signal'
 * '<S432>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller2/Anti-windup/Passthrough'
 * '<S433>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller2/D Gain/Disabled'
 * '<S434>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller2/Filter/Disabled'
 * '<S435>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller2/Filter ICs/Disabled'
 * '<S436>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller2/I Gain/Internal Parameters'
 * '<S437>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller2/Ideal P Gain/Passthrough'
 * '<S438>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller2/Ideal P Gain Fdbk/Disabled'
 * '<S439>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller2/Integrator/Discrete'
 * '<S440>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller2/Integrator ICs/Internal IC'
 * '<S441>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller2/N Copy/Disabled wSignal Specification'
 * '<S442>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller2/N Gain/Disabled'
 * '<S443>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller2/P Copy/Disabled'
 * '<S444>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller2/Parallel P Gain/Internal Parameters'
 * '<S445>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller2/Reset Signal/Disabled'
 * '<S446>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller2/Saturation/Passthrough'
 * '<S447>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller2/Saturation Fdbk/Disabled'
 * '<S448>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller2/Sum/Sum_PI'
 * '<S449>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller2/Sum Fdbk/Disabled'
 * '<S450>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller2/Tracking Mode/Disabled'
 * '<S451>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller2/Tracking Mode Sum/Passthrough'
 * '<S452>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller2/postSat Signal/Forward_Path'
 * '<S453>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller2/preSat Signal/Forward_Path'
 * '<S454>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller3/Anti-windup'
 * '<S455>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller3/D Gain'
 * '<S456>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller3/Filter'
 * '<S457>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller3/Filter ICs'
 * '<S458>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller3/I Gain'
 * '<S459>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller3/Ideal P Gain'
 * '<S460>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller3/Ideal P Gain Fdbk'
 * '<S461>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller3/Integrator'
 * '<S462>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller3/Integrator ICs'
 * '<S463>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller3/N Copy'
 * '<S464>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller3/N Gain'
 * '<S465>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller3/P Copy'
 * '<S466>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller3/Parallel P Gain'
 * '<S467>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller3/Reset Signal'
 * '<S468>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller3/Saturation'
 * '<S469>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller3/Saturation Fdbk'
 * '<S470>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller3/Sum'
 * '<S471>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller3/Sum Fdbk'
 * '<S472>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller3/Tracking Mode'
 * '<S473>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller3/Tracking Mode Sum'
 * '<S474>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller3/postSat Signal'
 * '<S475>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller3/preSat Signal'
 * '<S476>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller3/Anti-windup/Passthrough'
 * '<S477>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller3/D Gain/Disabled'
 * '<S478>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller3/Filter/Disabled'
 * '<S479>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller3/Filter ICs/Disabled'
 * '<S480>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller3/I Gain/Internal Parameters'
 * '<S481>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller3/Ideal P Gain/Passthrough'
 * '<S482>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller3/Ideal P Gain Fdbk/Disabled'
 * '<S483>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller3/Integrator/Discrete'
 * '<S484>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller3/Integrator ICs/Internal IC'
 * '<S485>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller3/N Copy/Disabled wSignal Specification'
 * '<S486>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller3/N Gain/Disabled'
 * '<S487>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller3/P Copy/Disabled'
 * '<S488>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller3/Parallel P Gain/Internal Parameters'
 * '<S489>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller3/Reset Signal/Disabled'
 * '<S490>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller3/Saturation/Passthrough'
 * '<S491>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller3/Saturation Fdbk/Disabled'
 * '<S492>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller3/Sum/Sum_PI'
 * '<S493>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller3/Sum Fdbk/Disabled'
 * '<S494>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller3/Tracking Mode/Disabled'
 * '<S495>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller3/Tracking Mode Sum/Passthrough'
 * '<S496>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller3/postSat Signal/Forward_Path'
 * '<S497>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller3/preSat Signal/Forward_Path'
 * '<S498>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller4/Anti-windup'
 * '<S499>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller4/D Gain'
 * '<S500>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller4/Filter'
 * '<S501>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller4/Filter ICs'
 * '<S502>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller4/I Gain'
 * '<S503>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller4/Ideal P Gain'
 * '<S504>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller4/Ideal P Gain Fdbk'
 * '<S505>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller4/Integrator'
 * '<S506>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller4/Integrator ICs'
 * '<S507>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller4/N Copy'
 * '<S508>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller4/N Gain'
 * '<S509>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller4/P Copy'
 * '<S510>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller4/Parallel P Gain'
 * '<S511>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller4/Reset Signal'
 * '<S512>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller4/Saturation'
 * '<S513>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller4/Saturation Fdbk'
 * '<S514>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller4/Sum'
 * '<S515>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller4/Sum Fdbk'
 * '<S516>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller4/Tracking Mode'
 * '<S517>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller4/Tracking Mode Sum'
 * '<S518>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller4/postSat Signal'
 * '<S519>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller4/preSat Signal'
 * '<S520>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller4/Anti-windup/Passthrough'
 * '<S521>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller4/D Gain/Disabled'
 * '<S522>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller4/Filter/Disabled'
 * '<S523>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller4/Filter ICs/Disabled'
 * '<S524>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller4/I Gain/Internal Parameters'
 * '<S525>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller4/Ideal P Gain/Passthrough'
 * '<S526>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller4/Ideal P Gain Fdbk/Disabled'
 * '<S527>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller4/Integrator/Discrete'
 * '<S528>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller4/Integrator ICs/Internal IC'
 * '<S529>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller4/N Copy/Disabled wSignal Specification'
 * '<S530>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller4/N Gain/Disabled'
 * '<S531>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller4/P Copy/Disabled'
 * '<S532>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller4/Parallel P Gain/Internal Parameters'
 * '<S533>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller4/Reset Signal/Disabled'
 * '<S534>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller4/Saturation/Passthrough'
 * '<S535>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller4/Saturation Fdbk/Disabled'
 * '<S536>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller4/Sum/Sum_PI'
 * '<S537>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller4/Sum Fdbk/Disabled'
 * '<S538>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller4/Tracking Mode/Disabled'
 * '<S539>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller4/Tracking Mode Sum/Passthrough'
 * '<S540>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller4/postSat Signal/Forward_Path'
 * '<S541>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller4/preSat Signal/Forward_Path'
 * '<S542>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller5/Anti-windup'
 * '<S543>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller5/D Gain'
 * '<S544>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller5/Filter'
 * '<S545>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller5/Filter ICs'
 * '<S546>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller5/I Gain'
 * '<S547>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller5/Ideal P Gain'
 * '<S548>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller5/Ideal P Gain Fdbk'
 * '<S549>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller5/Integrator'
 * '<S550>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller5/Integrator ICs'
 * '<S551>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller5/N Copy'
 * '<S552>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller5/N Gain'
 * '<S553>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller5/P Copy'
 * '<S554>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller5/Parallel P Gain'
 * '<S555>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller5/Reset Signal'
 * '<S556>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller5/Saturation'
 * '<S557>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller5/Saturation Fdbk'
 * '<S558>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller5/Sum'
 * '<S559>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller5/Sum Fdbk'
 * '<S560>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller5/Tracking Mode'
 * '<S561>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller5/Tracking Mode Sum'
 * '<S562>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller5/postSat Signal'
 * '<S563>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller5/preSat Signal'
 * '<S564>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller5/Anti-windup/Passthrough'
 * '<S565>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller5/D Gain/Disabled'
 * '<S566>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller5/Filter/Disabled'
 * '<S567>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller5/Filter ICs/Disabled'
 * '<S568>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller5/I Gain/Internal Parameters'
 * '<S569>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller5/Ideal P Gain/Passthrough'
 * '<S570>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller5/Ideal P Gain Fdbk/Disabled'
 * '<S571>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller5/Integrator/Discrete'
 * '<S572>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller5/Integrator ICs/Internal IC'
 * '<S573>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller5/N Copy/Disabled wSignal Specification'
 * '<S574>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller5/N Gain/Disabled'
 * '<S575>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller5/P Copy/Disabled'
 * '<S576>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller5/Parallel P Gain/Internal Parameters'
 * '<S577>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller5/Reset Signal/Disabled'
 * '<S578>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller5/Saturation/Passthrough'
 * '<S579>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller5/Saturation Fdbk/Disabled'
 * '<S580>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller5/Sum/Sum_PI'
 * '<S581>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller5/Sum Fdbk/Disabled'
 * '<S582>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller5/Tracking Mode/Disabled'
 * '<S583>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller5/Tracking Mode Sum/Passthrough'
 * '<S584>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller5/postSat Signal/Forward_Path'
 * '<S585>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/PID Controller5/preSat Signal/Forward_Path'
 * '<S586>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/filter/Low-Pass Filter (Discrete or Continuous)'
 * '<S587>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/filter/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant'
 * '<S588>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/filter/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)'
 * '<S589>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/filter/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Compare To Zero'
 * '<S590>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/filter/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete'
 * '<S591>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/filter1/Low-Pass Filter (Discrete or Continuous)'
 * '<S592>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/filter1/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant'
 * '<S593>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/filter1/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)'
 * '<S594>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/filter1/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Compare To Zero'
 * '<S595>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/filter1/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete'
 * '<S596>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/filter2/Low-Pass Filter (Discrete or Continuous)'
 * '<S597>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/filter2/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant'
 * '<S598>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/filter2/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)'
 * '<S599>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/filter2/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Compare To Zero'
 * '<S600>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/filter2/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete'
 * '<S601>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/filter3/Low-Pass Filter (Discrete or Continuous)'
 * '<S602>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/filter3/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant'
 * '<S603>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/filter3/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)'
 * '<S604>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/filter3/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Compare To Zero'
 * '<S605>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/filter3/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete'
 * '<S606>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/filter4/Low-Pass Filter (Discrete or Continuous)'
 * '<S607>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/filter4/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant'
 * '<S608>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/filter4/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)'
 * '<S609>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/filter4/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Compare To Zero'
 * '<S610>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/filter4/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete'
 * '<S611>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/filter5/Low-Pass Filter (Discrete or Continuous)'
 * '<S612>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/filter5/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant'
 * '<S613>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/filter5/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)'
 * '<S614>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/filter5/Low-Pass Filter (Discrete or Continuous)/Enable//disable time constant/Compare To Zero'
 * '<S615>' : 'closedLoop_tuned/Controller/Servomotor Speed Controller/filter5/Low-Pass Filter (Discrete or Continuous)/Integrator (Discrete or Continuous)/Discrete'
 */
#endif                                 /* RTW_HEADER_Controller_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
