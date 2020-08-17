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
  string s1, s2;

  getline(cin, s1);
  vector<string> v1 = frame(split(s1));
  
  getline(cin, s2);
  vector<string> v2 = frame(split(s2));


  vector<string> v = hcat(v1, v2);
  for (vector<string>::size_type i = 0; i != v.size(); ++i) {
      cout << v[i] << endl;      
  }
  
  return 0;
}

