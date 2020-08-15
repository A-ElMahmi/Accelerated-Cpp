// clang++-7 -pthread -std=c++17 -o main main.cpp
#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::setw;

int main() {
  for (int i = 1; i != 100; ++i) {
    cout << setw(2) << i << setw(5) << i*i << endl;
  }
  
  return 0;
}
