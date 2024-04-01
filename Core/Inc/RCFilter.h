/*
 * RCFilter.h
 *
 *  Created on: 28 Mar 2024
 *      Author: liwaiho
 */

#ifndef INC_RCFILTER_H_
#define INC_RCFILTER_H_

typedef struct{
	float coeff[2];
	float out[2];
}RCFilter;

void RCFilter_Init(RCFilter *self, float cutoffFreqHz, float sampleTimeS);

float RCfilter_Update(RCFilter *self, float inp);

#endif /* INC_RCFILTER_H_ */
