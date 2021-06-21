#include <iostream>  // cout, endl

int main() {
  int v = 10;
  const int *const_v_pointer = &v;
  std::cout << v << std::endl;
  // Output: 10

  std::cout << const_v_pointer << std::endl;
  // Output: Memory location of v
}
