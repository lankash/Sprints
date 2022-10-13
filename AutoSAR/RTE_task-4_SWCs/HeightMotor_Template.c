/**
 *
 * \file HeightMotor_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: HeightMotor
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 10/13/2022 09:48 AM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_HeightMotor.h"


/**
 *
 * Runnable HeightMotor_Serve
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppHeightMotor_HeightMove
 *
 */

void HeightMotor_Serve (StepMotorStepType* step)
{
	Std_ReturnType status;
	
	Dio_WriteChannel (Dio_ChannelType Channelld, Dio_LevelTypeLevel);

}

