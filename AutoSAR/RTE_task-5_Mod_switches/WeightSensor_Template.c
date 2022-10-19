/**
 *
 * \file WeightSensor_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: WeightSensor
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 10/19/2022 03:46 AM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_WeightSensor.h"


/**
 *
 * Runnable WeightSensor_GetPosition
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppWeightSensor_Opr_WeightValue
 *
 */

void WeightSensor_GetPosition (SensorWeightType* Weight)
{
	Std_ReturnType status;

	Weight = Adc_ReadWeight (Adc_WeightType Weight, Adc_ValueWeightType* DataBufferPtr);

}

