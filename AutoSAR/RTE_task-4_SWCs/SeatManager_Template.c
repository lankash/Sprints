/**
 *
 * \file SeatManager_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: SeatManager
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 10/13/2022 09:48 AM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_SeatManager.h"


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
	status = Rte_Call_rpHeightMotor_HeightMove(&step);
	status = Rte_Call_rpHeightSensor_Opr_HeightValue(&Height);
	status = Rte_Call_rpWeightSensor_Opr_WeightValue(&Weight);
	
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
	status = Rte_Call_rpInclineMotor_InclineMove(&step);
	status = Rte_Call_rpInclineSensor_Opr_InclineValue(&Incline);
	status = Rte_Call_rpWeightSensor_Opr_WeightValue(&Weight);
	
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
	status = Rte_Call_rpSlideMotor_SlideMove(&step);
	status = Rte_Call_rpSlideSensor_Opr_SlideValue(&Slide);
	status = Rte_Call_rpWeightSensor_Opr_WeightValue(&Weight);
	
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
	status = Rte_Call_rpHeightMotor_HeightMove(&step);
	
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
	status = Rte_Call_rpInclineMotor_InclineMove(&step);
	
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
	status = Rte_Call_rpSlideMotor_SlideMove(&step);
	
	if (SlideBtnState == MULTI_STATE_BTN_MINUS)
		Rte_Call_rpSlideMotor_Move(MOTOR_STEP_MINUS);
	else if (SlideBtnState == MULTI_STATE_BTN_PLUS)
		Rte_Call_rpSlideMotor_Move(MOTOR_STEP_PLUS);
	
}

