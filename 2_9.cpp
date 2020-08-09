#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
  cout << "Compare two numbers" << endl;
  
  cout << "Number 1: ";
  int num1;
  cin >> num1;
  
  cout << "Number 2: ";
  int num2;
  cin >> num2;
  
  if (num1 > num2)
    cout << num1 << " is bigger than " << num2 << endl;
  else
    cout << num2 << " is bigger than " << num1 << endl;
  
  
  return 0;
}
