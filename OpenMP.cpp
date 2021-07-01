#include <iostream>
#include <cstdio>
#include <chrono>
#include <vector>

// #include <omp.h>
#include "/usr/local/opt/libomp/include/omp.h"

void hello_openmp()
{
	omp_set_num_threads(8);

#pragma omp parallel
	{
#pragma omp critical
	std::cout << "Hello, OpenMP! " 
				<< omp_get_thread_num()
				<< "/"
				<< omp_get_num_threads()
				<< std::endl;
	}
}

int main(int argc, char* argv[])
{
	hello_openmp();

	// getchar();
	return 0;
}

