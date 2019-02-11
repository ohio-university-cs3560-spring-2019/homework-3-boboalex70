#include <iostream>

double deviation( int* a, int n);

int main()
{
	  int a[4] = {1,2,3,4};
	int n = sizeof(a);
		std::cout << deviation(a, n/4) << std::endl;
}
