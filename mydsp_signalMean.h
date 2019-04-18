/*
Created April 15, 2019 by WesSt

Various classes and functions useful for calculating the mean of a signal. 

Last updated April 17, 2019 by WesSt.
*/

#ifndef MYDSP_SIGNAL_MEAN
#define MYDSP_SIGNAL_MEAN

#include <stdint.h>

/*
Calculates the mean of a signal stored in an array of data type data_t with length len. 

returns the mean as a double
*/
template <class data_t> 
double SignalMeanCalculatorStatic(data_t* data, uint32_t len)
{
	double mean = 0;
	for(uint32_t i = 0; i < len; ++i) //go through the entire signal and sum all of the samples. 
	{
		mean += data[i];
	}
	
	mean /= len; //then divide by the total length for the average. 
	
	return mean;
}
#endif