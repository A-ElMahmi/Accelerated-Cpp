// clang++-7 -pthread -std=c++17 -o main main.cpp
#include <iostream>
#include <string>
#include <algorithm>

using std::cout;
using std::endl;
using std::string;
using std::max;

int main() {
  string::size_type maxLen;
  string name = "Abdu";

  cout << max(name.size(), maxLen) << endl;
}
