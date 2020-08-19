#include <iostream>
#include <vector>
#include <string>
#include "pictureframe.h"

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::getline;


int main() {
  string s;

  getline(cin, s);
  vector<string> v = frame(centre(split(s)));
  
  for (vector<string>::size_type i = 0; i != v.size(); ++i) {
      cout << v[i] << endl;      
  }
  
  return 0;
}

