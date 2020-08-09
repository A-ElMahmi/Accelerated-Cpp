#include <iostream>

using std::cout;
using std::endl;

int main() {
  int total = 1;
  for (int i = 1; i != 10; ++i) {
    total = total * i;
  }
  cout << "The product of the numbers in the range [1, 10) is " << total << endl;
  
  return 0;
}
