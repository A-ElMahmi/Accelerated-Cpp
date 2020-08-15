// clang++-7 -pthread -std=c++17 -o main main.cpp
#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::setw;

int findPadding(int num) {
  int count = 0;
  while (num != 0) {
    num = num / 10;
    ++count;
  }
  return count;
}

int main() {
  int number = 1000;
  int numPad = findPadding(number-1);
  int squarePad = findPadding(number * number) + 1;

  for (int i = 1; i != number; ++i) {
    cout << setw(numPad) << i 
         << setw(squarePad) << i*i << endl;
  }

  return 0;
}
