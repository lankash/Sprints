/**
 *
 * \file HMI_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: HMI
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 10/19/2022 03:46 AM
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

	/* Data Send Points */	
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


/**
 *
 * Runnable HMI_SeatModeChanged
 *
 * Triggered By:
 *  - DataReceivedEventImpl.DRE_rpSeatModeBtn_SeatModeBtn
 *
 */

void HMI_SeatModeChanged (void)
{
	Std_ReturnType status;
	SeatModeBtnType SeatModeBtn;
	uint8 SeatCtrlModes = RTE_MODE_SeatCtrlModes_INIT;

	/* Data Receive Points */
	/* Mode Switch Points */
	status = Rte_Read_rpSeatModeBtn_SeatModeBtn(&SeatModeBtn);
	if (SeatModeBtn == SEAT_MODE_BTN_MANUAL) 
		status = Rte_Switch_ppSeatCtrlMode_SeatCtrlModes(RTE_MODE_SeatCreltModes_MANUAL);
	
	else if (SeatModeBtn == Auto)
		status = Rte_Switch_ppSeatCtrlMode_SeatCtrlModes(RTE_MODE_SeatCreltModes_AUTO);
	
	else
		status = Rte_Switch_ppSeatCtrlMode_SeatCtrlModes(RTE_MODE_SeatCreltModes_INIT);
	
	
	
	
}

