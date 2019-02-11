/***! \file */


#include <iostream>
#include <vector>
#include <cmath>

/**
*	\brief deviation finds the standard deviation of an array
*	\param a array entered
*	\param n size of array
*	\return returns the standard deviation of array
*/


double deviation( int* a, int n )
{
	int sum = 0; //sum of nums in array
	for(int i = 0; i <= (n - 1); i++)
	{
		sum += a[i];
	} 
	double mean = sum /= (n - 1); //avg of numbers
	double stddev = 0; //standard deviation
	for(int i = 0; i <= n - 2; i++)
	{
		stddev += (a[i] - mean) * (a[i] - mean); 
	}
	stddev /= (n - 1);
	if( stddev == 0)
		std::cout << "Sigma is zero." << std::endl;
	return sqrt(stddev);
}
