#include <iostream>
#include <omp.h>


int main(int argc, char *argv[]) {
  std::cout << "number of available processors: " << omp_get_num_procs()
            << std::endl;
  std::cout << "number of threads: " << omp_get_max_threads()
            << std::endl;

  long int n = atol(argv[1]);
  std::cout << "we will form sum of numbers from 1 to " << n << std::endl;

  // start timer
  double t0 = omp_get_wtime();

  long int s = 0;
#pragma omp parallel for reduction(+:s)
  for (size_t i = 1; i <= n; i++)
  {
    s += i;
  }

  // stop timer
  double t1 = omp_get_wtime();

  std::cout << "sum: " << s << std::endl;
  std::cout << "elapsed wall clock time: " << t1 - t0 << " seconds" << std::endl;

  return 0;
}
