#include <iostream>  // cout, endl

int main() {
  int x = 10;

  try {
    std::cout << "Inside try block" << std::endl;

    if (x > 0) {  // True
      throw x;  // Following statement will be skipped
      std::cout << "After throw keyword" << std::endl;
    }
  } catch (int x) {
    std::cout << "Inside catch block: Exception found" << std::endl;
  }
  std::cout << "Outside try-catch block" << std::endl;
}

/*
Output:
Inside try block
Inside catch block: Exception found
Outside try-catch block
*/
