#include <iostream>  // cout, endl

int main() {
  const int imm = 10;

  std::cout << imm << std::endl;
  // Output: 10

  int imm_change = 11;

  std::cout << imm_change << std::endl;
  // Output: 11

  imm = imm_change;

  std::cout << imm << std::endl;
  // Error: We cannot change the value of imm
}
