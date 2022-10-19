/**
 *
 * \file SeatManager_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: SeatManager
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 10/19/2022 03:46 AM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_SeatManager.h"


/**
 *
 * Runnable SeatManager_AutoEntry
 *
 * Triggered By:
 *  - SwcModeSwitchEventImpl.MSE_rpSeatCtrlMode_AUTO_ON_ENTRY
 *
 */

void SeatManager_AutoEntry (void)
{
	Std_ReturnType status;
	
	/*
	Algorithm to disable the follownig ...
	1) SeatManager_SetHeight
	2) SeatManager_SetIncline
	3) SeatManager_SetSlide
	*/
	
	/*
	Algorithm to Enable the following ...
	1) SeatManager_AutoHeight
	2) SeatManager_AutoIncline
	3) SeatManager_AutoSlide
	*/

}


/**
 *
 * Runnable SeatManager_AutoHeight
 *
 * Triggered By:
 *  - TimingEventImpl.TE_SeatManager_AutoHeight_200ms
 *
 */

void SeatManager_AutoHeight (void)
{
	Std_ReturnType status;
	StepMotorStepType step;
	SensorPositionType Height;
	SensorWeightType Weight;

	/* Server Call Points */
	status = Rte_Read_rpHeightSensor_Opr_HeightValue(&Height);
	status = Rte_Read_rpWeightSensor_Opr_WeightValue(&Weight);
	
	if ((Weight > 100) && (Height == MULTI_STATE_BTN_PLUS)) 
			Rte_Call_rpHeightMotor_HeightMove(INCREMENT_SENSOR_POSIION_STEP_3);
	else if ((Weight > 100) && (Height == MULTI_STATE_BTN_MINUS)) 
			Rte_Call_rpHeightMotor_HeightMove(DECREMENT_SENSOR_POSIION_STEP_3);
	else if ((Weight <= 100) && (Weight >= 80) && (Height == MULTI_STATE_BTN_PLUS))
			Rte_Call_rpHeightMotor_HeightMove(INCREMENT_SENSOR_POSIION_STEP_2);
	else if ((Weight <= 100) && (Weight >= 80) && (Height == MULTI_STATE_BTN_MINUS))
			Rte_Call_rpHeightMotor_HeightMove(DECREMENT_SENSOR_POSIION_STEP_2);
	else if ((Weight <= 80) && (Weight >= 60) && (Height == MULTI_STATE_BTN_PLUS))
			Rte_Call_rpHeightMotor_HeightMove(INCREMENT_SENSOR_POSIION_STEP_1);
	else if ((Weight <= 80) && (Weight >= 60) && (Height == MULTI_STATE_BTN_MINUS))
			Rte_Call_rpHeightMotor_HeightMove(DECREMENT_SENSOR_POSIION_STEP_1);
	else if ((Weight < 60) && (Height == MULTI_STATE_BTN_PLUS))
			Rte_Call_rpHeightMotor_HeightMove(INCREMENT_SENSOR_POSIION_STEP_0);
	else if ((Weight < 60) && (Height == MULTI_STATE_BTN_MINUS))
			Rte_Call_rpHeightMotor_HeightMove(DECREMENT_SENSOR_POSIION_STEP_0);
	
}


/**
 *
 * Runnable SeatManager_AutoIncline
 *
 * Triggered By:
 *  - TimingEventImpl.TE_SeatManager_AutoIncline_200ms
 *
 */

void SeatManager_AutoIncline (void)
{
	Std_ReturnType status;
	StepMotorStepType step;
	MultiStateBtnType Incline;
	SensorWeightType Weight;

	/* Server Call Points */
	status = Rte_Read_rpInclineSensor_Opr_InclineValue(&Incline);
	status = Rte_Read_rpWeightSensor_Opr_WeightValue(&Weight);
	
	if ((Weight > 100) && (Incline == MULTI_STATE_BTN_PLUS)) 
			Rte_Call_rpHeightMotor_HeightMove(INCREMENT_SENSOR_POSIION_STEP_3);
	else if ((Weight > 100) && (Incline == MULTI_STATE_BTN_MINUS)) 
			Rte_Call_rpHeightMotor_HeightMove(DECREMENT_SENSOR_POSIION_STEP_3);
	else if ((Weight <= 100) && (Weight >= 80) && (Incline == MULTI_STATE_BTN_PLUS))
			Rte_Call_rpHeightMotor_HeightMove(INCREMENT_SENSOR_POSIION_STEP_2);
	else if ((Weight <= 100) && (Weight >= 80) && (Incline == MULTI_STATE_BTN_MINUS))
			Rte_Call_rpHeightMotor_HeightMove(DECREMENT_SENSOR_POSIION_STEP_2);
	else if ((Weight <= 80) && (Weight >= 60) && (Incline == MULTI_STATE_BTN_PLUS))
			Rte_Call_rpHeightMotor_HeightMove(INCREMENT_SENSOR_POSIION_STEP_1);
	else if ((Weight <= 80) && (Weight >= 60) && (Incline == MULTI_STATE_BTN_MINUS))
			Rte_Call_rpHeightMotor_HeightMove(DECREMENT_SENSOR_POSIION_STEP_1);
	else if ((Weight < 60) && (Incline == MULTI_STATE_BTN_PLUS))
			Rte_Call_rpHeightMotor_HeightMove(INCREMENT_SENSOR_POSIION_STEP_0);
	else if ((Weight < 60) && (Incline == MULTI_STATE_BTN_MINUS))
			Rte_Call_rpHeightMotor_HeightMove(DECREMENT_SENSOR_POSIION_STEP_0);
	
}


/**
 *
 * Runnable SeatManager_AutoSlide
 *
 * Triggered By:
 *  - TimingEventImpl.TE_SeatManager_AutoSlide_200ms
 *
 */

void SeatManager_AutoSlide (void)
{
	Std_ReturnType status;
	StepMotorStepType step;
	SensorPositionType Slide;
	SensorWeightType Weight;

	/* Server Call Points */
	status = Rte_Read_rpSlideSensor_Opr_SlideValue(&Slide);
	status = Rte_Read_rpWeightSensor_Opr_WeightValue(&Weight);
	
	if ((Weight > 100) && (Slide == MULTI_STATE_BTN_PLUS)) 
			Rte_Call_rpHeightMotor_HeightMove(INCREMENT_SENSOR_POSIION_STEP_3);
	else if ((Weight > 100) && (Slide == MULTI_STATE_BTN_MINUS)) 
			Rte_Call_rpHeightMotor_HeightMove(DECREMENT_SENSOR_POSIION_STEP_3);
	else if ((Weight <= 100) && (Weight >= 80) && (Slide == MULTI_STATE_BTN_PLUS))
			Rte_Call_rpHeightMotor_HeightMove(INCREMENT_SENSOR_POSIION_STEP_2);
	else if ((Weight <= 100) && (Weight >= 80) && (Slide == MULTI_STATE_BTN_MINUS))
			Rte_Call_rpHeightMotor_HeightMove(DECREMENT_SENSOR_POSIION_STEP_2);
	else if ((Weight <= 80) && (Weight >= 60) && (Slide == MULTI_STATE_BTN_PLUS))
			Rte_Call_rpHeightMotor_HeightMove(INCREMENT_SENSOR_POSIION_STEP_1);
	else if ((Weight <= 80) && (Weight >= 60) && (Slide == MULTI_STATE_BTN_MINUS))
			Rte_Call_rpHeightMotor_HeightMove(DECREMENT_SENSOR_POSIION_STEP_1);
	else if ((Weight < 60) && (Slide == MULTI_STATE_BTN_PLUS))
			Rte_Call_rpHeightMotor_HeightMove(INCREMENT_SENSOR_POSIION_STEP_0);
	else if ((Weight < 60) && (Slide == MULTI_STATE_BTN_MINUS))
			Rte_Call_rpHeightMotor_HeightMove(DECREMENT_SENSOR_POSIION_STEP_0);
	
}


/**
 *
 * Runnable SeatManager_InitEntry
 *
 * Triggered By:
 *  - SwcModeSwitchEventImpl.MSE_rpSeatCtrlMode_INIT_ON_ENTRY
 *
 */

void SeatManager_InitEntry (void)
{
	Std_ReturnType status;
	
	/*
	Algorithm to Disable the follownig ...
	1) SeatManager_SetHeight
	2) SeatManager_SetIncline
	3) SeatManager_SetSlide
	*/
	
	/*
	Algorithm to Disable the following ...
	1) SeatManager_AutoHeight
	2) SeatManager_AutoIncline
	3) SeatManager_AutoSlide
	*/

}


/**
 *
 * Runnable SeatManager_InitExit
 *
 * Triggered By:
 *  - SwcModeSwitchEventImpl.MSE_rpSeatCtrlMode_INIT_ON_EXIT
 *
 */

void SeatManager_InitExit (void)
{
	Std_ReturnType status;
	
	

}


/**
 *
 * Runnable SeatManager_MainFunction
 *
 * Triggered By:
 *  - TimingEventImpl.TE_SeatManager_MainFunction_10ms
 *
 */

void SeatManager_MainFunction (void)
{
	Std_ReturnType status;
	

}


/**
 *
 * Runnable SeatManager_ManualEntry
 *
 * Triggered By:
 *  - SwcModeSwitchEventImpl.MSE_rpSeatCtrlMode_MANUAL_ON_ENTRY
 *
 */

void SeatManager_ManualEntry (void)
{
	Std_ReturnType status;
	
	/*
	Algorithm to Disable the following ...
	1) SeatManager_AutoHeight
	2) SeatManager_AutoIncline
	3) SeatManager_AutoSlide
	*/
	
	/*
	Algorithm to Enable the follownig ...
	1) SeatManager_SetHeight
	2) SeatManager_SetIncline
	3) SeatManager_SetSlide
	*/
	
	

}


/**
 *
 * Runnable SeatManager_SetHeight
 *
 * Triggered By:
 *  - DataReceivedEventImpl.DRE_rpSeatCtrlBtns_HeightBtnState
 *
 */

void SeatManager_SetHeight (void)
{
	Std_ReturnType status;
	StepMotorStepType step;

	/* Server Call Points */
	if (HeightBtnState == MULTI_STATE_BTN_MINUS)
		Rte_Call_rpHeightMotor_Move(MOTOR_STEP_MINUS);
	else if (HeightBtnState == MULTI_STATE_BTN_PLUS)
		Rte_Call_rpHeightMotor_Move(MOTOR_STEP_PLUS);
	
}


/**
 *
 * Runnable SeatManager_SetIncline
 *
 * Triggered By:
 *  - DataReceivedEventImpl.DRE_rpSeatCtrlBtns_InclineBtnState
 *
 */

void SeatManager_SetIncline (void)
{
	Std_ReturnType status;
	StepMotorStepType step;

	/* Server Call Points */
	if (InclineBtnState == MULTI_STATE_BTN_MINUS)
		Rte_Call_rpInclineMotor_Move(MOTOR_STEP_MINUS);
	else if (InclineBtnState == MULTI_STATE_BTN_PLUS)
		Rte_Call_rpInclineMotor_Move(MOTOR_STEP_PLUS);
	
}


/**
 *
 * Runnable SeatManager_SetSlide
 *
 * Triggered By:
 *  - DataReceivedEventImpl.DRE_rpSeatCtrlBtns_SlideBtnState
 *
 */

void SeatManager_SetSlide (void)
{
	Std_ReturnType status;
	StepMotorStepType step;

	/* Server Call Points */
	if (SlideBtnState == MULTI_STATE_BTN_MINUS)
		Rte_Call_rpSlideMotor_Move(MOTOR_STEP_MINUS);
	else if (SlideBtnState == MULTI_STATE_BTN_PLUS)
		Rte_Call_rpSlideMotor_Move(MOTOR_STEP_PLUS);
	
}

