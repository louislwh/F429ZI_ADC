/*
 * RCFilter.c
 *
 *  Created on: 28 Mar 2024
 *      Author: liwaiho
 */
#include "RCFilter.h"

void RCFilter_Init(RCFilter *self, float cutoffFreqHz, float sampleTimeS){

	/* Compute equivalent 'RC' constant from cut-off frequency */
	float RC = 1.0f/ (6.28318530718f * cutoffFreqHz);

	/* pre-compute the filter coefficients for 1st RC low-pass filter */
	self->coeff[0] = sampleTimeS / (sampleTimeS + RC);
	self->coeff[1] = RC / (sampleTimeS + RC);

	/* clear output buffer */
	self->out[0] = 0.0f;
	self->out[1] = 0.0f;
}

float RCfilter_Update(RCFilter *self, float inp){

	/* shift output samples */
	self->out[1] = self->out[0];

	/* compute new output sample */
	self->out[0] = self->coeff[0] * inp + self->coeff[1] * self->out[1];

	/* return filtered sample */
	return self->out[0];
}
