/**
 *
 * \file SeatManager_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: SeatManager
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 10/4/2022 03:53 PM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_SeatManager.h"


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
	
	status = Rte_Read_rpSeatCtrlBtns_HeightBtnState(&HeightBtnState);
	
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
 *  - DataReceivedEventImpl.DRE_rpSeatCtrlBtns_SlideBtnState
 *
 */

void SeatManager_SetIncline (void)
{
	Std_ReturnType status;
	
	status = Rte_Read_rpSeatCtrlBtns_InclineBtnState(&InclineBtnState);
	
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
 *  - DataReceivedEventImpl.DRE_rpSeatCtrlBtns_InclineBtnState
 *
 */

void SeatManager_SetSlide (void)
{
	Std_ReturnType status;
	
	status = Rte_Read_rpSeatCtrlBtns_SlideBtnState(&SlideBtnState);
	
	if (SlideBtnState == MULTI_STATE_BTN_MINUS)
		Rte_Call_rpSlideMotor_Move(MOTOR_STEP_MINUS);
	else if (SlideBtnState == MULTI_STATE_BTN_PLUS)
		Rte_Call_rpSlideMotor_Move(MOTOR_STEP_PLUS);

}

