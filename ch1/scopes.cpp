#include <iostream>  // cout, endl

int global_var = 100;
// Global variable initialised

void print() {
  std::cout << global_var << std::endl;
  // Output: 100

  std::cout << local_var << std::endl;
  // Output: Error: Out of scope
}

int main() {
  int local_var = 10;

  std::cout << local_var << std::endl;
  // Output: 10

  std::cout << global_var << std::endl;
  // Output: 100

  print();
  // Output: 100
  // Output: Error: Out of scope
}
