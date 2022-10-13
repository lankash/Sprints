/**
 *
 * \file SlideSensor_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: SlideSensor
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 10/13/2022 09:48 AM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_SlideSensor.h"


/**
 *
 * Runnable SlideSensor_GetPosition
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppSlideSensor_Opr_SlideValue
 *
 */

void SlideSensor_GetPosition (SensorPositionType* Slide)
{
	Std_ReturnType status;
	
	Slide = Adc_ReadSlide (Adc_SlideType Slide, Adc_ValueSlideType* DataBufferPtr);


}

