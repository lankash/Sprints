/**
 *
 * \file SlideMotor_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: SlideMotor
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 10/11/2022 03:42 AM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_SlideMotor.h"


/**
 *
 * Runnable SlideMotor_Serve
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppSlideMotor_SlideMove
 *
 */

void SlideMotor_Serve (StepMotorStepType* step)
{
	Std_ReturnType status;
	
	Dio_WriteChannel (Dio_ChannelType Channelld, Dio_LevelTypeLevel);

}

