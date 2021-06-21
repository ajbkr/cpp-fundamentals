#include <iostream>  // cout, endl

int global_var = 1000;

int main() {
  int global_var = 100;

  std::cout << "Global: " << ::global_var << std::endl;
  std::cout << "Local: " << global_var << std::endl;
}
