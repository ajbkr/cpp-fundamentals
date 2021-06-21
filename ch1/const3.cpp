#include <iostream>  // cout, endl

int main() {
  int v = 10;
  int *const v_const_pointer = &v;

  std::cout << v << std::endl;
  // Output: 10

  std::cout << v_const_pointer << std::endl;
  // Output: Memory location of v
}
