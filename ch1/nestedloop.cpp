#include <iostream>  // cout, endl

int main() {
  for (int x = 0; x < 5; ++x) {
    for (int y = 5; y > x; --y) {
      std::cout << "*";
    }
    std::cout << std::endl;
  }
}

/*
Output:
*****
****
***
**
*
*/
