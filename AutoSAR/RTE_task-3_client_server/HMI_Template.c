/**
 *
 * \file HMI_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: HMI
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 10/11/2022 03:42 AM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_HMI.h"


/**
 *
 * Runnable HMI_MainFunction
 *
 * Triggered By:
 *  - TimingEventImpl.TE_HMI_MainFunction_100ms
 *
 */

void HMI_MainFunction (void)
{
	Std_ReturnType status;
	MultiStateBtnType HeightBtnState;
	MultiStateBtnType InclineBtnState;
	MultiStateBtnType SlideBtnState;
	uint8 Height;
	uint8 Incline;
	uint8 Slide;

	/* Data Receive Points */
	status = Rte_Read_rpSeatCtrlData_Height(&Height);
	if (Height == 1)
		HeightBtnState = MULTI_STATE_BTN_MINUS;
	else if (Height == 2)
		HeightBtnState = MULTI_STATE_BTN_PLUS;
	status = Rte_Write_ppSeatCtrlBtns_HeightBtnState(HeightBtnState);
	
	
	status = Rte_Read_rpSeatCtrlData_Incline(&Incline);
	if (Incline == 1)
		InclineBtnState = MULTI_STATE_BTN_MINUS;
	else if (Incline == 2)
		InclineBtnState = MULTI_STATE_BTN_PLUS;
	status = Rte_Write_ppSeatCtrlBtns_InclineBtnState(InclineBtnState);

	
	status = Rte_Read_rpSeatCtrlData_Slide(&Slide);
	if (Slide == 1)
		SlideBtnState = MULTI_STATE_BTN_MINUS;
	else if (Slide == 2)
		SlideBtnState = MULTI_STATE_BTN_PLUS;
	status = Rte_Write_ppSeatCtrlBtns_SlideBtnState(SlideBtnState);
	
}

