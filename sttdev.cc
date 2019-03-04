#include "stddev.h"

double stddev(int n, ...){

	int sum = 0;
	std::vector<int> v;
	va_list args;
	va_start(args, n);
	for (int i = 0; i < n; i++){
		int tmp = va_arg(args, int);
		v.push_back(tmp);
		sum += tmp;
	}
	va_end(args);
	double avg = (sum + 0.0) / (v.size() - 0.0); //0.0 added to avoid problems with integer division
	double std = 0;
	for (int i = 0; i < v.size(); i++){
		std += (v[i] - avg) * (v[i] - avg);
	}
	std /= v.size();
	return sqrt(std);

}
