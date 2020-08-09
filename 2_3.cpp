#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  cout << "What is your first name? ";
  string name;
  cin >> name;
  
  const string greeting = "Hello, " + name + "!";
  
  
  cout << "How much padding would you like? ";
  int pad;
  cin >> pad;
  
  const int rows = pad * 2 + 3;
  const string::size_type cols = pad * 2 + greeting.size() + 2;
  
  cout << endl;
  
  for (int r = 0; r != rows; ++r) {
    string::size_type c = 0;
    while (c != cols) {
      if (r == pad + 1 && c == pad + 1) {
        // Greeting
        cout << greeting;
        c += greeting.size();
      } else {
        if (r == 0 || r == rows-1 || c == 0 || c == cols-1) {
          // Border
          cout << "*";
        } else {
          // Padding
          cout << " ";
        }
        ++c;
      }
    }
    cout << endl;
  }
  
  return 0;
}
