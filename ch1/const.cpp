#include <iostream>  // cout, endl

int main() {
  const int const_v = 10;
  int &const_ref = const_v;
  // Error
  std::cout << const_v << std::endl;
  // Output: 10
}
