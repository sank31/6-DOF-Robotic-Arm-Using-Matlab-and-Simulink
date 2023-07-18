/*
 * File: Controller.c
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

#include "Controller.h"
#include "Controller_private.h"

const jointTorqueBus Controller_rtZjointTorqueBus = {
  0.0,                                 /* upperArmJointTorque */
  0.0,                                 /* foreArmJointTorque */
  0.0,                                 /* wristJointTorque */
  0.0,                                 /* gripperJointTorque */
  0.0,                                 /* rightFingerJointTorque */
  0.0                                  /* leftFingerJointTorque */
} ;                                    /* jointTorqueBus ground */

/* Block signals (default storage) */
B_Controller_T Controller_B;

/* Block states (default storage) */
DW_Controller_T Controller_DW;

/* External inputs (root inport signals with default storage) */
ExtU_Controller_T Controller_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Controller_T Controller_Y;

/* Real-time model */
RT_MODEL_Controller_T Controller_M_;
RT_MODEL_Controller_T *const Controller_M = &Controller_M_;

/* Model step function */
void Controller_step(void)
{
  real_T rtb_K;
  real_T rtb_Sum_ct;
  real_T rtb_AvoidDividebyZero;
  real_T rtb_FilterCoefficient;
  real_T rtb_K_pd;
  real_T rtb_Sum_g;
  real_T rtb_AvoidDividebyZero_oj;
  real_T rtb_K_mr;
  real_T rtb_Sum_p5;
  real_T rtb_FilterCoefficient_l;
  real_T rtb_K_m;
  real_T rtb_Sum_k;
  real_T rtb_K_gj;
  real_T rtb_Sum_ek;
  real_T rtb_FilterCoefficient_a4;
  real_T rtb_K_b;
  real_T rtb_Sum_ir;
  real_T rtb_K_f;
  real_T rtb_Sum_nw;
  real_T rtb_FilterCoefficient_k;
  real_T rtb_K_l5;
  real_T rtb_Sum_cg;
  real_T rtb_K_d;
  real_T rtb_Sum_cm;
  real_T rtb_FilterCoefficient_n;
  real_T rtb_K_i;
  real_T rtb_Sum_d;
  real_T rtb_K_hv;
  real_T rtb_Sum_lk;
  real_T rtb_FilterCoefficient_k2;
  real_T rtb_K_aq;
  real_T rtb_Max;
  real_T rtb_IntegralGain;
  real_T rtb_AvoidDividebyZero_gl;
  real_T rtb_AvoidDividebyZero_o;
  real_T rtb_AvoidDividebyZero_mo;
  real_T rtb_AvoidDividebyZero_j;
  real_T rtb_AvoidDividebyZero_na;
  real_T rtb_AvoidDividebyZero_fq;
  real_T rtb_AvoidDividebyZero_c;
  real_T rtb_AvoidDividebyZero_d;
  real_T rtb_AvoidDividebyZero_ke;
  boolean_T rtb_Compare;
  boolean_T rtb_Compare_f;
  boolean_T rtb_Compare_h;
  boolean_T rtb_Compare_cf;
  boolean_T rtb_Compare_d;
  boolean_T rtb_Compare_i;
  boolean_T rtb_Compare_no;
  boolean_T rtb_Compare_e;
  boolean_T rtb_Compare_b0;
  boolean_T rtb_Compare_fs;
  boolean_T rtb_Compare_p3;
  boolean_T rtb_Compare_c;
  boolean_T tmp;

  /* RelationalOperator: '<S308>/Compare' incorporates:
   *  Constant: '<S306>/Time constant'
   *  Constant: '<S308>/Constant'
   *  Sum: '<S306>/Sum1'
   */
  rtb_Compare = (0.01 - Controller_B.Probe_hr[0] <= 0.0);

  /* Gain: '<S305>/K' incorporates:
   *  Inport: '<Root>/jointsAngleReference'
   */
  rtb_K = 1.0 * Controller_U.qRef.leftFingerJointMotion;

  /* DiscreteIntegrator: '<S309>/Integrator' */
  if (Controller_DW.Integrator_IC_LOADING != 0) {
    Controller_DW.Integrator_DSTATE = rtb_K;
  }

  if (rtb_Compare || (Controller_DW.Integrator_PrevResetState != 0)) {
    Controller_DW.Integrator_DSTATE = rtb_K;
  }

  /* MinMax: '<S306>/Max' incorporates:
   *  Constant: '<S306>/Time constant'
   *  MinMax: '<S281>/Max'
   *  MinMax: '<S286>/Max'
   *  MinMax: '<S291>/Max'
   *  MinMax: '<S296>/Max'
   *  MinMax: '<S301>/Max'
   *  MinMax: '<S587>/Max'
   *  MinMax: '<S592>/Max'
   *  MinMax: '<S597>/Max'
   *  MinMax: '<S602>/Max'
   *  MinMax: '<S607>/Max'
   *  MinMax: '<S612>/Max'
   */
  tmp = rtIsNaN(0.01);
  if ((Controller_B.Probe_hr[0] > 0.01) || tmp) {
    rtb_Sum_ct = Controller_B.Probe_hr[0];
  } else {
    rtb_Sum_ct = 0.01;
  }

  /* End of MinMax: '<S306>/Max' */

  /* Fcn: '<S306>/Avoid Divide by Zero' */
  rtb_AvoidDividebyZero = (real_T)(rtb_Sum_ct == 0.0) * 2.2204460492503131e-16 +
    rtb_Sum_ct;

  /* Sum: '<S15>/Sum' incorporates:
   *  DiscreteIntegrator: '<S309>/Integrator'
   *  Inport: '<Root>/jointsAngle'
   */
  rtb_Sum_ct = Controller_DW.Integrator_DSTATE -
    Controller_U.q.leftFingerJointMotion;

  /* Gain: '<S268>/Filter Coefficient' incorporates:
   *  DiscreteIntegrator: '<S260>/Filter'
   *  Gain: '<S259>/Derivative Gain'
   *  Sum: '<S260>/SumD'
   */
  rtb_FilterCoefficient = (0.20047626148189 * rtb_Sum_ct -
    Controller_DW.Filter_DSTATE) * 257.755378801474;

  /* Gain: '<S611>/K' incorporates:
   *  DiscreteIntegrator: '<S265>/Integrator'
   *  Gain: '<S270>/Proportional Gain'
   *  Gain: '<S3>/Gain15'
   *  Sum: '<S274>/Sum'
   */
  rtb_K_pd = ((10.7654470599538 * rtb_Sum_ct + Controller_DW.Integrator_DSTATE_j)
              + rtb_FilterCoefficient) * 0.16666666666666666 * 1.0;

  /* RelationalOperator: '<S614>/Compare' incorporates:
   *  Constant: '<S612>/Time constant'
   *  Constant: '<S614>/Constant'
   *  Sum: '<S612>/Sum1'
   */
  rtb_Compare_f = (0.01 - Controller_B.Probe_pq[0] <= 0.0);

  /* DiscreteIntegrator: '<S615>/Integrator' */
  if (Controller_DW.Integrator_IC_LOADING_n != 0) {
    Controller_DW.Integrator_DSTATE_k = rtb_K_pd;
  }

  if (rtb_Compare_f || (Controller_DW.Integrator_PrevResetState_c != 0)) {
    Controller_DW.Integrator_DSTATE_k = rtb_K_pd;
  }

  /* MinMax: '<S612>/Max' incorporates:
   *  Constant: '<S612>/Time constant'
   */
  if ((Controller_B.Probe_pq[0] > 0.01) || tmp) {
    rtb_Sum_g = Controller_B.Probe_pq[0];
  } else {
    rtb_Sum_g = 0.01;
  }

  /* Fcn: '<S612>/Avoid Divide by Zero' */
  rtb_AvoidDividebyZero_oj = (real_T)(rtb_Sum_g == 0.0) * 2.2204460492503131e-16
    + rtb_Sum_g;

  /* Sum: '<S321>/Sum' incorporates:
   *  DiscreteIntegrator: '<S615>/Integrator'
   *  Gain: '<S3>/Gain16'
   *  Inport: '<Root>/jointsVelocity'
   */
  rtb_Sum_g = Controller_DW.Integrator_DSTATE_k - 0.16666666666666666 *
    Controller_U.w.leftFingerJointVel;

  /* RelationalOperator: '<S589>/Compare' incorporates:
   *  Constant: '<S587>/Time constant'
   *  Constant: '<S589>/Constant'
   *  Sum: '<S587>/Sum1'
   */
  rtb_Compare_h = (0.01 - Controller_B.Probe[0] <= 0.0);

  /* RelationalOperator: '<S283>/Compare' incorporates:
   *  Constant: '<S281>/Time constant'
   *  Constant: '<S283>/Constant'
   *  Sum: '<S281>/Sum1'
   */
  rtb_Compare_cf = (0.01 - Controller_B.Probe_i[0] <= 0.0);

  /* Gain: '<S280>/K' incorporates:
   *  Inport: '<Root>/jointsAngleReference'
   */
  rtb_K_mr = 1.0 * Controller_U.qRef.upperArmJointMotion;

  /* DiscreteIntegrator: '<S284>/Integrator' */
  if (Controller_DW.Integrator_IC_LOADING_m != 0) {
    Controller_DW.Integrator_DSTATE_a = rtb_K_mr;
  }

  if (rtb_Compare_cf || (Controller_DW.Integrator_PrevResetState_cw != 0)) {
    Controller_DW.Integrator_DSTATE_a = rtb_K_mr;
  }

  /* Sum: '<S10>/Sum' incorporates:
   *  DiscreteIntegrator: '<S284>/Integrator'
   *  Inport: '<Root>/jointsAngle'
   */
  rtb_Sum_p5 = Controller_DW.Integrator_DSTATE_a -
    Controller_U.q.upperArmJointMotion;

  /* Gain: '<S48>/Filter Coefficient' incorporates:
   *  DiscreteIntegrator: '<S40>/Filter'
   *  Gain: '<S39>/Derivative Gain'
   *  Sum: '<S40>/SumD'
   */
  rtb_FilterCoefficient_l = (0.346600752490046 * rtb_Sum_p5 -
    Controller_DW.Filter_DSTATE_h) * 761.904761904762;

  /* Gain: '<S586>/K' incorporates:
   *  DiscreteIntegrator: '<S45>/Integrator'
   *  Gain: '<S3>/Gain2'
   *  Gain: '<S50>/Proportional Gain'
   *  Sum: '<S54>/Sum'
   */
  rtb_K_m = ((10.4708336285486 * rtb_Sum_p5 + Controller_DW.Integrator_DSTATE_k1)
             + rtb_FilterCoefficient_l) * 0.16666666666666666 * 1.0;

  /* DiscreteIntegrator: '<S590>/Integrator' */
  if (Controller_DW.Integrator_IC_LOADING_b != 0) {
    Controller_DW.Integrator_DSTATE_b = rtb_K_m;
  }

  if (rtb_Compare_h || (Controller_DW.Integrator_PrevResetState_k != 0)) {
    Controller_DW.Integrator_DSTATE_b = rtb_K_m;
  }

  /* Sum: '<S316>/Sum' incorporates:
   *  DiscreteIntegrator: '<S590>/Integrator'
   *  Gain: '<S3>/Gain4'
   *  Inport: '<Root>/jointsVelocity'
   */
  rtb_Sum_k = Controller_DW.Integrator_DSTATE_b - 0.16666666666666666 *
    Controller_U.w.upperArmJointVel;

  /* RelationalOperator: '<S594>/Compare' incorporates:
   *  Constant: '<S592>/Time constant'
   *  Constant: '<S594>/Constant'
   *  Sum: '<S592>/Sum1'
   */
  rtb_Compare_d = (0.01 - Controller_B.Probe_ib[0] <= 0.0);

  /* RelationalOperator: '<S288>/Compare' incorporates:
   *  Constant: '<S286>/Time constant'
   *  Constant: '<S288>/Constant'
   *  Sum: '<S286>/Sum1'
   */
  rtb_Compare_i = (0.01 - Controller_B.Probe_p[0] <= 0.0);

  /* Gain: '<S285>/K' incorporates:
   *  Inport: '<Root>/jointsAngleReference'
   */
  rtb_K_gj = 1.0 * Controller_U.qRef.foreArmJointMotion;

  /* DiscreteIntegrator: '<S289>/Integrator' */
  if (Controller_DW.Integrator_IC_LOADING_g != 0) {
    Controller_DW.Integrator_DSTATE_c = rtb_K_gj;
  }

  if (rtb_Compare_i || (Controller_DW.Integrator_PrevResetState_f != 0)) {
    Controller_DW.Integrator_DSTATE_c = rtb_K_gj;
  }

  /* Sum: '<S11>/Sum' incorporates:
   *  DiscreteIntegrator: '<S289>/Integrator'
   *  Inport: '<Root>/jointsAngle'
   */
  rtb_Sum_ek = Controller_DW.Integrator_DSTATE_c -
    Controller_U.q.foreArmJointMotion;

  /* Gain: '<S92>/Filter Coefficient' incorporates:
   *  DiscreteIntegrator: '<S84>/Filter'
   *  Gain: '<S83>/Derivative Gain'
   *  Sum: '<S84>/SumD'
   */
  rtb_FilterCoefficient_a4 = (21.0180234727249 * rtb_Sum_ek -
    Controller_DW.Filter_DSTATE_hg) * 4.00240654506278E-5;

  /* Gain: '<S591>/K' incorporates:
   *  DiscreteIntegrator: '<S89>/Integrator'
   *  Gain: '<S3>/Gain3'
   *  Gain: '<S94>/Proportional Gain'
   *  Sum: '<S98>/Sum'
   */
  rtb_K_b = ((10.7694124560307 * rtb_Sum_ek + Controller_DW.Integrator_DSTATE_o)
             + rtb_FilterCoefficient_a4) * 0.16666666666666666 * 1.0;

  /* DiscreteIntegrator: '<S595>/Integrator' */
  if (Controller_DW.Integrator_IC_LOADING_l != 0) {
    Controller_DW.Integrator_DSTATE_o3 = rtb_K_b;
  }

  if (rtb_Compare_d || (Controller_DW.Integrator_PrevResetState_cl != 0)) {
    Controller_DW.Integrator_DSTATE_o3 = rtb_K_b;
  }

  /* Sum: '<S317>/Sum' incorporates:
   *  DiscreteIntegrator: '<S595>/Integrator'
   *  Gain: '<S3>/Gain5'
   *  Inport: '<Root>/jointsVelocity'
   */
  rtb_Sum_ir = Controller_DW.Integrator_DSTATE_o3 - 0.16666666666666666 *
    Controller_U.w.foreArmJointVel;

  /* RelationalOperator: '<S599>/Compare' incorporates:
   *  Constant: '<S597>/Time constant'
   *  Constant: '<S599>/Constant'
   *  Sum: '<S597>/Sum1'
   */
  rtb_Compare_no = (0.01 - Controller_B.Probe_n[0] <= 0.0);

  /* RelationalOperator: '<S293>/Compare' incorporates:
   *  Constant: '<S291>/Time constant'
   *  Constant: '<S293>/Constant'
   *  Sum: '<S291>/Sum1'
   */
  rtb_Compare_e = (0.01 - Controller_B.Probe_pi[0] <= 0.0);

  /* Gain: '<S290>/K' incorporates:
   *  Inport: '<Root>/jointsAngleReference'
   */
  rtb_K_f = 1.0 * Controller_U.qRef.wristJointMotion;

  /* DiscreteIntegrator: '<S294>/Integrator' */
  if (Controller_DW.Integrator_IC_LOADING_i != 0) {
    Controller_DW.Integrator_DSTATE_m = rtb_K_f;
  }

  if (rtb_Compare_e || (Controller_DW.Integrator_PrevResetState_m != 0)) {
    Controller_DW.Integrator_DSTATE_m = rtb_K_f;
  }

  /* Sum: '<S12>/Sum' incorporates:
   *  DiscreteIntegrator: '<S294>/Integrator'
   *  Inport: '<Root>/jointsAngle'
   */
  rtb_Sum_nw = Controller_DW.Integrator_DSTATE_m -
    Controller_U.q.wristJointMotion;

  /* Gain: '<S136>/Filter Coefficient' incorporates:
   *  DiscreteIntegrator: '<S128>/Filter'
   *  Gain: '<S127>/Derivative Gain'
   *  Sum: '<S128>/SumD'
   */
  rtb_FilterCoefficient_k = (0.223470955257761 * rtb_Sum_nw -
    Controller_DW.Filter_DSTATE_g) * 761.904761904762;

  /* Gain: '<S596>/K' incorporates:
   *  DiscreteIntegrator: '<S133>/Integrator'
   *  Gain: '<S138>/Proportional Gain'
   *  Gain: '<S3>/Gain6'
   *  Sum: '<S142>/Sum'
   */
  rtb_K_l5 = ((10.8442867281081 * rtb_Sum_nw + Controller_DW.Integrator_DSTATE_h)
              + rtb_FilterCoefficient_k) * 0.16666666666666666 * 1.0;

  /* DiscreteIntegrator: '<S600>/Integrator' */
  if (Controller_DW.Integrator_IC_LOADING_gz != 0) {
    Controller_DW.Integrator_DSTATE_k2 = rtb_K_l5;
  }

  if (rtb_Compare_no || (Controller_DW.Integrator_PrevResetState_g != 0)) {
    Controller_DW.Integrator_DSTATE_k2 = rtb_K_l5;
  }

  /* Sum: '<S318>/Sum' incorporates:
   *  DiscreteIntegrator: '<S600>/Integrator'
   *  Gain: '<S3>/Gain7'
   *  Inport: '<Root>/jointsVelocity'
   */
  rtb_Sum_cg = Controller_DW.Integrator_DSTATE_k2 - 0.16666666666666666 *
    Controller_U.w.wristJointVel;

  /* RelationalOperator: '<S604>/Compare' incorporates:
   *  Constant: '<S602>/Time constant'
   *  Constant: '<S604>/Constant'
   *  Sum: '<S602>/Sum1'
   */
  rtb_Compare_b0 = (0.01 - Controller_B.Probe_g[0] <= 0.0);

  /* RelationalOperator: '<S298>/Compare' incorporates:
   *  Constant: '<S296>/Time constant'
   *  Constant: '<S298>/Constant'
   *  Sum: '<S296>/Sum1'
   */
  rtb_Compare_fs = (0.01 - Controller_B.Probe_ni[0] <= 0.0);

  /* Gain: '<S295>/K' incorporates:
   *  Inport: '<Root>/jointsAngleReference'
   */
  rtb_K_d = 1.0 * Controller_U.qRef.gripperJointMotion;

  /* DiscreteIntegrator: '<S299>/Integrator' */
  if (Controller_DW.Integrator_IC_LOADING_o != 0) {
    Controller_DW.Integrator_DSTATE_hl = rtb_K_d;
  }

  if (rtb_Compare_fs || (Controller_DW.Integrator_PrevResetState_m4 != 0)) {
    Controller_DW.Integrator_DSTATE_hl = rtb_K_d;
  }

  /* Sum: '<S13>/Sum' incorporates:
   *  DiscreteIntegrator: '<S299>/Integrator'
   *  Inport: '<Root>/jointsAngle'
   */
  rtb_Sum_cm = Controller_DW.Integrator_DSTATE_hl -
    Controller_U.q.gripperJointMotion;

  /* Gain: '<S180>/Filter Coefficient' incorporates:
   *  DiscreteIntegrator: '<S172>/Filter'
   *  Gain: '<S171>/Derivative Gain'
   *  Sum: '<S172>/SumD'
   */
  rtb_FilterCoefficient_n = (58.2762205966547 * rtb_Sum_cm -
    Controller_DW.Filter_DSTATE_n) * 0.0216415897548656;

  /* Gain: '<S601>/K' incorporates:
   *  DiscreteIntegrator: '<S177>/Integrator'
   *  Gain: '<S182>/Proportional Gain'
   *  Gain: '<S3>/Gain9'
   *  Sum: '<S186>/Sum'
   */
  rtb_K_i = ((9.66802754702183 * rtb_Sum_cm + Controller_DW.Integrator_DSTATE_e)
             + rtb_FilterCoefficient_n) * 0.16666666666666666 * 1.0;

  /* DiscreteIntegrator: '<S605>/Integrator' */
  if (Controller_DW.Integrator_IC_LOADING_i2 != 0) {
    Controller_DW.Integrator_DSTATE_km = rtb_K_i;
  }

  if (rtb_Compare_b0 || (Controller_DW.Integrator_PrevResetState_l != 0)) {
    Controller_DW.Integrator_DSTATE_km = rtb_K_i;
  }

  /* Sum: '<S319>/Sum' incorporates:
   *  DiscreteIntegrator: '<S605>/Integrator'
   *  Gain: '<S3>/Gain10'
   *  Inport: '<Root>/jointsVelocity'
   */
  rtb_Sum_d = Controller_DW.Integrator_DSTATE_km - 0.16666666666666666 *
    Controller_U.w.gripperJointVel;

  /* RelationalOperator: '<S609>/Compare' incorporates:
   *  Constant: '<S607>/Time constant'
   *  Constant: '<S609>/Constant'
   *  Sum: '<S607>/Sum1'
   */
  rtb_Compare_p3 = (0.01 - Controller_B.Probe_l[0] <= 0.0);

  /* RelationalOperator: '<S303>/Compare' incorporates:
   *  Constant: '<S301>/Time constant'
   *  Constant: '<S303>/Constant'
   *  Sum: '<S301>/Sum1'
   */
  rtb_Compare_c = (0.01 - Controller_B.Probe_h[0] <= 0.0);

  /* Gain: '<S300>/K' incorporates:
   *  Inport: '<Root>/jointsAngleReference'
   */
  rtb_K_hv = 1.0 * Controller_U.qRef.rightFingerJointMotion;

  /* DiscreteIntegrator: '<S304>/Integrator' */
  if (Controller_DW.Integrator_IC_LOADING_d != 0) {
    Controller_DW.Integrator_DSTATE_d = rtb_K_hv;
  }

  if (rtb_Compare_c || (Controller_DW.Integrator_PrevResetState_l1 != 0)) {
    Controller_DW.Integrator_DSTATE_d = rtb_K_hv;
  }

  /* Sum: '<S14>/Sum' incorporates:
   *  DiscreteIntegrator: '<S304>/Integrator'
   *  Inport: '<Root>/jointsAngle'
   */
  rtb_Sum_lk = Controller_DW.Integrator_DSTATE_d -
    Controller_U.q.rightFingerJointMotion;

  /* Gain: '<S224>/Filter Coefficient' incorporates:
   *  DiscreteIntegrator: '<S216>/Filter'
   *  Gain: '<S215>/Derivative Gain'
   *  Sum: '<S216>/SumD'
   */
  rtb_FilterCoefficient_k2 = (0.195709489924621 * rtb_Sum_lk -
    Controller_DW.Filter_DSTATE_p) * 190.172011630327;

  /* Gain: '<S606>/K' incorporates:
   *  DiscreteIntegrator: '<S221>/Integrator'
   *  Gain: '<S226>/Proportional Gain'
   *  Gain: '<S3>/Gain12'
   *  Sum: '<S230>/Sum'
   */
  rtb_K_aq = ((10.7702769040942 * rtb_Sum_lk + Controller_DW.Integrator_DSTATE_p)
              + rtb_FilterCoefficient_k2) * 0.16666666666666666 * 1.0;

  /* DiscreteIntegrator: '<S610>/Integrator' */
  if (Controller_DW.Integrator_IC_LOADING_h != 0) {
    Controller_DW.Integrator_DSTATE_en = rtb_K_aq;
  }

  if (rtb_Compare_p3 || (Controller_DW.Integrator_PrevResetState_e != 0)) {
    Controller_DW.Integrator_DSTATE_en = rtb_K_aq;
  }

  /* Sum: '<S320>/Sum' incorporates:
   *  DiscreteIntegrator: '<S610>/Integrator'
   *  Gain: '<S3>/Gain13'
   *  Inport: '<Root>/jointsVelocity'
   */
  rtb_Max = Controller_DW.Integrator_DSTATE_en - 0.16666666666666666 *
    Controller_U.w.rightFingerJointVel;

  /* Outport: '<Root>/torqueReference' incorporates:
   *  DiscreteIntegrator: '<S351>/Integrator'
   *  DiscreteIntegrator: '<S395>/Integrator'
   *  DiscreteIntegrator: '<S439>/Integrator'
   *  DiscreteIntegrator: '<S483>/Integrator'
   *  DiscreteIntegrator: '<S527>/Integrator'
   *  DiscreteIntegrator: '<S571>/Integrator'
   *  Gain: '<S356>/Proportional Gain'
   *  Gain: '<S400>/Proportional Gain'
   *  Gain: '<S444>/Proportional Gain'
   *  Gain: '<S488>/Proportional Gain'
   *  Gain: '<S532>/Proportional Gain'
   *  Gain: '<S576>/Proportional Gain'
   *  Sum: '<S360>/Sum'
   *  Sum: '<S404>/Sum'
   *  Sum: '<S448>/Sum'
   *  Sum: '<S492>/Sum'
   *  Sum: '<S536>/Sum'
   *  Sum: '<S580>/Sum'
   */
  Controller_Y.torqueReference.upperArmJointTorque = 0.0360231984902585 *
    rtb_Sum_k + Controller_DW.Integrator_DSTATE_f;
  Controller_Y.torqueReference.foreArmJointTorque = 0.0192799899284329 *
    rtb_Sum_ir + Controller_DW.Integrator_DSTATE_oy;
  Controller_Y.torqueReference.wristJointTorque = 0.0426832255455665 *
    rtb_Sum_cg + Controller_DW.Integrator_DSTATE_jb;
  Controller_Y.torqueReference.gripperJointTorque = 0.00572339896932079 *
    rtb_Sum_d + Controller_DW.Integrator_DSTATE_jr;
  Controller_Y.torqueReference.rightFingerJointTorque = 0.00659405389444924 *
    rtb_Max + Controller_DW.Integrator_DSTATE_ed;
  Controller_Y.torqueReference.leftFingerJointTorque = 0.00683255135393729 *
    rtb_Sum_g + Controller_DW.Integrator_DSTATE_j1;

  /* Gain: '<S524>/Integral Gain' */
  rtb_IntegralGain = 0.324359106529765 * rtb_Max;

  /* MinMax: '<S607>/Max' incorporates:
   *  Constant: '<S607>/Time constant'
   */
  if ((Controller_B.Probe_l[0] > 0.01) || tmp) {
    rtb_Max = Controller_B.Probe_l[0];
  } else {
    rtb_Max = 0.01;
  }

  /* Fcn: '<S607>/Avoid Divide by Zero' */
  rtb_AvoidDividebyZero_gl = (real_T)(rtb_Max == 0.0) * 2.2204460492503131e-16 +
    rtb_Max;

  /* MinMax: '<S301>/Max' incorporates:
   *  Constant: '<S301>/Time constant'
   */
  if ((Controller_B.Probe_h[0] > 0.01) || tmp) {
    rtb_Max = Controller_B.Probe_h[0];
  } else {
    rtb_Max = 0.01;
  }

  /* Fcn: '<S301>/Avoid Divide by Zero' */
  rtb_AvoidDividebyZero_o = (real_T)(rtb_Max == 0.0) * 2.2204460492503131e-16 +
    rtb_Max;

  /* MinMax: '<S602>/Max' incorporates:
   *  Constant: '<S602>/Time constant'
   */
  if ((Controller_B.Probe_g[0] > 0.01) || tmp) {
    rtb_Max = Controller_B.Probe_g[0];
  } else {
    rtb_Max = 0.01;
  }

  /* Fcn: '<S602>/Avoid Divide by Zero' */
  rtb_AvoidDividebyZero_mo = (real_T)(rtb_Max == 0.0) * 2.2204460492503131e-16 +
    rtb_Max;

  /* MinMax: '<S296>/Max' incorporates:
   *  Constant: '<S296>/Time constant'
   */
  if ((Controller_B.Probe_ni[0] > 0.01) || tmp) {
    rtb_Max = Controller_B.Probe_ni[0];
  } else {
    rtb_Max = 0.01;
  }

  /* Fcn: '<S296>/Avoid Divide by Zero' */
  rtb_AvoidDividebyZero_j = (real_T)(rtb_Max == 0.0) * 2.2204460492503131e-16 +
    rtb_Max;

  /* MinMax: '<S597>/Max' incorporates:
   *  Constant: '<S597>/Time constant'
   */
  if ((Controller_B.Probe_n[0] > 0.01) || tmp) {
    rtb_Max = Controller_B.Probe_n[0];
  } else {
    rtb_Max = 0.01;
  }

  /* Fcn: '<S597>/Avoid Divide by Zero' */
  rtb_AvoidDividebyZero_na = (real_T)(rtb_Max == 0.0) * 2.2204460492503131e-16 +
    rtb_Max;

  /* MinMax: '<S291>/Max' incorporates:
   *  Constant: '<S291>/Time constant'
   */
  if ((Controller_B.Probe_pi[0] > 0.01) || tmp) {
    rtb_Max = Controller_B.Probe_pi[0];
  } else {
    rtb_Max = 0.01;
  }

  /* Fcn: '<S291>/Avoid Divide by Zero' */
  rtb_AvoidDividebyZero_fq = (real_T)(rtb_Max == 0.0) * 2.2204460492503131e-16 +
    rtb_Max;

  /* MinMax: '<S592>/Max' incorporates:
   *  Constant: '<S592>/Time constant'
   */
  if ((Controller_B.Probe_ib[0] > 0.01) || tmp) {
    rtb_Max = Controller_B.Probe_ib[0];
  } else {
    rtb_Max = 0.01;
  }

  /* Fcn: '<S592>/Avoid Divide by Zero' */
  rtb_AvoidDividebyZero_c = (real_T)(rtb_Max == 0.0) * 2.2204460492503131e-16 +
    rtb_Max;

  /* MinMax: '<S286>/Max' incorporates:
   *  Constant: '<S286>/Time constant'
   */
  if ((Controller_B.Probe_p[0] > 0.01) || tmp) {
    rtb_Max = Controller_B.Probe_p[0];
  } else {
    rtb_Max = 0.01;
  }

  /* Fcn: '<S286>/Avoid Divide by Zero' */
  rtb_AvoidDividebyZero_d = (real_T)(rtb_Max == 0.0) * 2.2204460492503131e-16 +
    rtb_Max;

  /* MinMax: '<S587>/Max' incorporates:
   *  Constant: '<S587>/Time constant'
   */
  if ((Controller_B.Probe[0] > 0.01) || tmp) {
    rtb_Max = Controller_B.Probe[0];
  } else {
    rtb_Max = 0.01;
  }

  /* Fcn: '<S587>/Avoid Divide by Zero' */
  rtb_AvoidDividebyZero_ke = (real_T)(rtb_Max == 0.0) * 2.2204460492503131e-16 +
    rtb_Max;

  /* MinMax: '<S281>/Max' incorporates:
   *  Constant: '<S281>/Time constant'
   */
  if ((Controller_B.Probe_i[0] > 0.01) || tmp) {
    rtb_Max = Controller_B.Probe_i[0];
  } else {
    rtb_Max = 0.01;
  }

  /* Update for DiscreteIntegrator: '<S309>/Integrator' incorporates:
   *  Product: '<S305>/1//T'
   *  Sum: '<S305>/Sum1'
   */
  Controller_DW.Integrator_IC_LOADING = 0U;
  Controller_DW.Integrator_DSTATE += 1.0 / rtb_AvoidDividebyZero * (rtb_K -
    Controller_DW.Integrator_DSTATE) * 0.0025;
  Controller_DW.Integrator_PrevResetState = (int8_T)rtb_Compare;

  /* Update for DiscreteIntegrator: '<S265>/Integrator' incorporates:
   *  Gain: '<S262>/Integral Gain'
   */
  Controller_DW.Integrator_DSTATE_j += 0.00114163073091871 * rtb_Sum_ct * 0.0025;

  /* Update for DiscreteIntegrator: '<S260>/Filter' */
  Controller_DW.Filter_DSTATE += 0.0025 * rtb_FilterCoefficient;

  /* Update for DiscreteIntegrator: '<S615>/Integrator' incorporates:
   *  Product: '<S611>/1//T'
   *  Sum: '<S611>/Sum1'
   */
  Controller_DW.Integrator_IC_LOADING_n = 0U;
  Controller_DW.Integrator_DSTATE_k += 1.0 / rtb_AvoidDividebyZero_oj *
    (rtb_K_pd - Controller_DW.Integrator_DSTATE_k) * 0.0025;
  Controller_DW.Integrator_PrevResetState_c = (int8_T)rtb_Compare_f;

  /* Update for DiscreteIntegrator: '<S571>/Integrator' incorporates:
   *  Gain: '<S568>/Integral Gain'
   */
  Controller_DW.Integrator_DSTATE_j1 += 0.146143607435002 * rtb_Sum_g * 0.0025;

  /* Update for DiscreteIntegrator: '<S284>/Integrator' incorporates:
   *  Fcn: '<S281>/Avoid Divide by Zero'
   *  Product: '<S280>/1//T'
   *  Sum: '<S280>/Sum1'
   */
  Controller_DW.Integrator_IC_LOADING_m = 0U;
  Controller_DW.Integrator_DSTATE_a += 1.0 / ((real_T)(rtb_Max == 0.0) *
    2.2204460492503131e-16 + rtb_Max) * (rtb_K_mr -
    Controller_DW.Integrator_DSTATE_a) * 0.0025;
  Controller_DW.Integrator_PrevResetState_cw = (int8_T)rtb_Compare_cf;

  /* Update for DiscreteIntegrator: '<S45>/Integrator' incorporates:
   *  Gain: '<S42>/Integral Gain'
   */
  Controller_DW.Integrator_DSTATE_k1 += 0.000419222702982036 * rtb_Sum_p5 *
    0.0025;

  /* Update for DiscreteIntegrator: '<S40>/Filter' */
  Controller_DW.Filter_DSTATE_h += 0.0025 * rtb_FilterCoefficient_l;

  /* Update for DiscreteIntegrator: '<S590>/Integrator' incorporates:
   *  Product: '<S586>/1//T'
   *  Sum: '<S586>/Sum1'
   */
  Controller_DW.Integrator_IC_LOADING_b = 0U;
  Controller_DW.Integrator_DSTATE_b += 1.0 / rtb_AvoidDividebyZero_ke * (rtb_K_m
    - Controller_DW.Integrator_DSTATE_b) * 0.0025;
  Controller_DW.Integrator_PrevResetState_k = (int8_T)rtb_Compare_h;

  /* Update for DiscreteIntegrator: '<S351>/Integrator' incorporates:
   *  Gain: '<S348>/Integral Gain'
   */
  Controller_DW.Integrator_DSTATE_f += 0.00337174988064101 * rtb_Sum_k * 0.0025;

  /* Update for DiscreteIntegrator: '<S289>/Integrator' incorporates:
   *  Product: '<S285>/1//T'
   *  Sum: '<S285>/Sum1'
   */
  Controller_DW.Integrator_IC_LOADING_g = 0U;
  Controller_DW.Integrator_DSTATE_c += 1.0 / rtb_AvoidDividebyZero_d * (rtb_K_gj
    - Controller_DW.Integrator_DSTATE_c) * 0.0025;
  Controller_DW.Integrator_PrevResetState_f = (int8_T)rtb_Compare_i;

  /* Update for DiscreteIntegrator: '<S89>/Integrator' incorporates:
   *  Gain: '<S86>/Integral Gain'
   */
  Controller_DW.Integrator_DSTATE_o += 0.000593032145468798 * rtb_Sum_ek *
    0.0025;

  /* Update for DiscreteIntegrator: '<S84>/Filter' */
  Controller_DW.Filter_DSTATE_hg += 0.0025 * rtb_FilterCoefficient_a4;

  /* Update for DiscreteIntegrator: '<S595>/Integrator' incorporates:
   *  Product: '<S591>/1//T'
   *  Sum: '<S591>/Sum1'
   */
  Controller_DW.Integrator_IC_LOADING_l = 0U;
  Controller_DW.Integrator_DSTATE_o3 += 1.0 / rtb_AvoidDividebyZero_c * (rtb_K_b
    - Controller_DW.Integrator_DSTATE_o3) * 0.0025;
  Controller_DW.Integrator_PrevResetState_cl = (int8_T)rtb_Compare_d;

  /* Update for DiscreteIntegrator: '<S395>/Integrator' incorporates:
   *  Gain: '<S392>/Integral Gain'
   */
  Controller_DW.Integrator_DSTATE_oy += 2.06091269945642 * rtb_Sum_ir * 0.0025;

  /* Update for DiscreteIntegrator: '<S294>/Integrator' incorporates:
   *  Product: '<S290>/1//T'
   *  Sum: '<S290>/Sum1'
   */
  Controller_DW.Integrator_IC_LOADING_i = 0U;
  Controller_DW.Integrator_DSTATE_m += 1.0 / rtb_AvoidDividebyZero_fq * (rtb_K_f
    - Controller_DW.Integrator_DSTATE_m) * 0.0025;
  Controller_DW.Integrator_PrevResetState_m = (int8_T)rtb_Compare_e;

  /* Update for DiscreteIntegrator: '<S133>/Integrator' incorporates:
   *  Gain: '<S130>/Integral Gain'
   */
  Controller_DW.Integrator_DSTATE_h += 0.000448190430142682 * rtb_Sum_nw *
    0.0025;

  /* Update for DiscreteIntegrator: '<S128>/Filter' */
  Controller_DW.Filter_DSTATE_g += 0.0025 * rtb_FilterCoefficient_k;

  /* Update for DiscreteIntegrator: '<S600>/Integrator' incorporates:
   *  Product: '<S596>/1//T'
   *  Sum: '<S596>/Sum1'
   */
  Controller_DW.Integrator_IC_LOADING_gz = 0U;
  Controller_DW.Integrator_DSTATE_k2 += 1.0 / rtb_AvoidDividebyZero_na *
    (rtb_K_l5 - Controller_DW.Integrator_DSTATE_k2) * 0.0025;
  Controller_DW.Integrator_PrevResetState_g = (int8_T)rtb_Compare_no;

  /* Update for DiscreteIntegrator: '<S439>/Integrator' incorporates:
   *  Gain: '<S436>/Integral Gain'
   */
  Controller_DW.Integrator_DSTATE_jb += 0.0265288646840578 * rtb_Sum_cg * 0.0025;

  /* Update for DiscreteIntegrator: '<S299>/Integrator' incorporates:
   *  Product: '<S295>/1//T'
   *  Sum: '<S295>/Sum1'
   */
  Controller_DW.Integrator_IC_LOADING_o = 0U;
  Controller_DW.Integrator_DSTATE_hl += 1.0 / rtb_AvoidDividebyZero_j * (rtb_K_d
    - Controller_DW.Integrator_DSTATE_hl) * 0.0025;
  Controller_DW.Integrator_PrevResetState_m4 = (int8_T)rtb_Compare_fs;

  /* Update for DiscreteIntegrator: '<S177>/Integrator' incorporates:
   *  Gain: '<S174>/Integral Gain'
   */
  Controller_DW.Integrator_DSTATE_e += 0.000444755466308859 * rtb_Sum_cm *
    0.0025;

  /* Update for DiscreteIntegrator: '<S172>/Filter' */
  Controller_DW.Filter_DSTATE_n += 0.0025 * rtb_FilterCoefficient_n;

  /* Update for DiscreteIntegrator: '<S605>/Integrator' incorporates:
   *  Product: '<S601>/1//T'
   *  Sum: '<S601>/Sum1'
   */
  Controller_DW.Integrator_IC_LOADING_i2 = 0U;
  Controller_DW.Integrator_DSTATE_km += 1.0 / rtb_AvoidDividebyZero_mo *
    (rtb_K_i - Controller_DW.Integrator_DSTATE_km) * 0.0025;
  Controller_DW.Integrator_PrevResetState_l = (int8_T)rtb_Compare_b0;

  /* Update for DiscreteIntegrator: '<S483>/Integrator' incorporates:
   *  Gain: '<S480>/Integral Gain'
   */
  Controller_DW.Integrator_DSTATE_jr += 0.460092048608168 * rtb_Sum_d * 0.0025;

  /* Update for DiscreteIntegrator: '<S304>/Integrator' incorporates:
   *  Product: '<S300>/1//T'
   *  Sum: '<S300>/Sum1'
   */
  Controller_DW.Integrator_IC_LOADING_d = 0U;
  Controller_DW.Integrator_DSTATE_d += 1.0 / rtb_AvoidDividebyZero_o * (rtb_K_hv
    - Controller_DW.Integrator_DSTATE_d) * 0.0025;
  Controller_DW.Integrator_PrevResetState_l1 = (int8_T)rtb_Compare_c;

  /* Update for DiscreteIntegrator: '<S221>/Integrator' incorporates:
   *  Gain: '<S218>/Integral Gain'
   */
  Controller_DW.Integrator_DSTATE_p += 0.00097597573827831 * rtb_Sum_lk * 0.0025;

  /* Update for DiscreteIntegrator: '<S216>/Filter' */
  Controller_DW.Filter_DSTATE_p += 0.0025 * rtb_FilterCoefficient_k2;

  /* Update for DiscreteIntegrator: '<S610>/Integrator' incorporates:
   *  Product: '<S606>/1//T'
   *  Sum: '<S606>/Sum1'
   */
  Controller_DW.Integrator_IC_LOADING_h = 0U;
  Controller_DW.Integrator_DSTATE_en += 1.0 / rtb_AvoidDividebyZero_gl *
    (rtb_K_aq - Controller_DW.Integrator_DSTATE_en) * 0.0025;
  Controller_DW.Integrator_PrevResetState_e = (int8_T)rtb_Compare_p3;

  /* Update for DiscreteIntegrator: '<S527>/Integrator' */
  Controller_DW.Integrator_DSTATE_ed += 0.0025 * rtb_IntegralGain;
}

/* Model initialize function */
void Controller_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(Controller_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &Controller_B), 0,
                sizeof(B_Controller_T));

  /* states (dwork) */
  (void) memset((void *)&Controller_DW, 0,
                sizeof(DW_Controller_T));

  /* external inputs */
  (void)memset(&Controller_U, 0, sizeof(ExtU_Controller_T));

  /* external outputs */
  Controller_Y.torqueReference = Controller_rtZjointTorqueBus;

  /* Start for Probe: '<S587>/Probe' */
  Controller_B.Probe[0] = 0.0025;
  Controller_B.Probe[1] = 0.0;

  /* Start for Probe: '<S281>/Probe' */
  Controller_B.Probe_i[0] = 0.0025;
  Controller_B.Probe_i[1] = 0.0;

  /* Start for Probe: '<S592>/Probe' */
  Controller_B.Probe_ib[0] = 0.0025;
  Controller_B.Probe_ib[1] = 0.0;

  /* Start for Probe: '<S286>/Probe' */
  Controller_B.Probe_p[0] = 0.0025;
  Controller_B.Probe_p[1] = 0.0;

  /* Start for Probe: '<S597>/Probe' */
  Controller_B.Probe_n[0] = 0.0025;
  Controller_B.Probe_n[1] = 0.0;

  /* Start for Probe: '<S291>/Probe' */
  Controller_B.Probe_pi[0] = 0.0025;
  Controller_B.Probe_pi[1] = 0.0;

  /* Start for Probe: '<S602>/Probe' */
  Controller_B.Probe_g[0] = 0.0025;
  Controller_B.Probe_g[1] = 0.0;

  /* Start for Probe: '<S296>/Probe' */
  Controller_B.Probe_ni[0] = 0.0025;
  Controller_B.Probe_ni[1] = 0.0;

  /* Start for Probe: '<S607>/Probe' */
  Controller_B.Probe_l[0] = 0.0025;
  Controller_B.Probe_l[1] = 0.0;

  /* Start for Probe: '<S301>/Probe' */
  Controller_B.Probe_h[0] = 0.0025;
  Controller_B.Probe_h[1] = 0.0;

  /* Start for Probe: '<S612>/Probe' */
  Controller_B.Probe_pq[0] = 0.0025;
  Controller_B.Probe_pq[1] = 0.0;

  /* Start for Probe: '<S306>/Probe' */
  Controller_B.Probe_hr[0] = 0.0025;
  Controller_B.Probe_hr[1] = 0.0;

  /* InitializeConditions for DiscreteIntegrator: '<S309>/Integrator' */
  Controller_DW.Integrator_IC_LOADING = 1U;
  Controller_DW.Integrator_PrevResetState = 0;

  /* InitializeConditions for DiscreteIntegrator: '<S615>/Integrator' */
  Controller_DW.Integrator_IC_LOADING_n = 1U;
  Controller_DW.Integrator_PrevResetState_c = 0;

  /* InitializeConditions for DiscreteIntegrator: '<S284>/Integrator' */
  Controller_DW.Integrator_IC_LOADING_m = 1U;
  Controller_DW.Integrator_PrevResetState_cw = 0;

  /* InitializeConditions for DiscreteIntegrator: '<S590>/Integrator' */
  Controller_DW.Integrator_IC_LOADING_b = 1U;
  Controller_DW.Integrator_PrevResetState_k = 0;

  /* InitializeConditions for DiscreteIntegrator: '<S289>/Integrator' */
  Controller_DW.Integrator_IC_LOADING_g = 1U;
  Controller_DW.Integrator_PrevResetState_f = 0;

  /* InitializeConditions for DiscreteIntegrator: '<S595>/Integrator' */
  Controller_DW.Integrator_IC_LOADING_l = 1U;
  Controller_DW.Integrator_PrevResetState_cl = 0;

  /* InitializeConditions for DiscreteIntegrator: '<S294>/Integrator' */
  Controller_DW.Integrator_IC_LOADING_i = 1U;
  Controller_DW.Integrator_PrevResetState_m = 0;

  /* InitializeConditions for DiscreteIntegrator: '<S600>/Integrator' */
  Controller_DW.Integrator_IC_LOADING_gz = 1U;
  Controller_DW.Integrator_PrevResetState_g = 0;

  /* InitializeConditions for DiscreteIntegrator: '<S299>/Integrator' */
  Controller_DW.Integrator_IC_LOADING_o = 1U;
  Controller_DW.Integrator_PrevResetState_m4 = 0;

  /* InitializeConditions for DiscreteIntegrator: '<S605>/Integrator' */
  Controller_DW.Integrator_IC_LOADING_i2 = 1U;
  Controller_DW.Integrator_PrevResetState_l = 0;

  /* InitializeConditions for DiscreteIntegrator: '<S304>/Integrator' */
  Controller_DW.Integrator_IC_LOADING_d = 1U;
  Controller_DW.Integrator_PrevResetState_l1 = 0;

  /* InitializeConditions for DiscreteIntegrator: '<S610>/Integrator' */
  Controller_DW.Integrator_IC_LOADING_h = 1U;
  Controller_DW.Integrator_PrevResetState_e = 0;
}

/* Model terminate function */
void Controller_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
