/**
 *
 * \file HeightSensor_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: HeightSensor
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 10/13/2022 09:48 AM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_HeightSensor.h"


/**
 *
 * Runnable HeightSensor_GetPosition
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppHeightSensor_Opr_HeightValue
 *
 */

void HeightSensor_GetPosition (SensorPositionType* Height)
{
	Std_ReturnType status;
	
	Height = Adc_ReadHeight (Adc_HeightType Height, Adc_ValueHeightType* DataBufferPtr);

}

