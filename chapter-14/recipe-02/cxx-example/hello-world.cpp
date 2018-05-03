#include <cstdlib>
#include <iostream>
#include <string>

const std::string cmake_system_name = CMAKE_SYSTEM_NAME;

int main() {
  std::cout << "Hello from a Windows binary ";
  std::cout << "compiled on " << cmake_system_name;
  std::cout << std::endl;
  return EXIT_SUCCESS;
}
