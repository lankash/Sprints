/**
 *
 * \file InclineSensor_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: InclineSensor
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 10/19/2022 03:46 AM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_InclineSensor.h"


/**
 *
 * Runnable InclineSensor_GetPosition
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppInclineSensor_Opr_InclineValue
 *
 */

void InclineSensor_GetPosition (MultiStateBtnType* Incline)
{
	Std_ReturnType status;

	Incline = Adc_ReadIncline (Adc_InclineType Incline, Adc_ValueInclineType* DataBufferPtr);

}

