#include <iostream>  // cout, endl

int main() {
  int x = 10;

  if (x > 0) {
    std::cout << x << std::endl;
  }

  if (x > 11) {
    std::cout << x << std::endl;
  } else {
    std::cout << x - 1 << std::endl;
  }
}

/*
Output:
10
9
*/
