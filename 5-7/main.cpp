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
  vector<string> v;
  v = frame(v);

  for (vector<string>::size_type i = 0; i != v.size(); ++i)
    cout << v[i] << endl;

  return 0;
}

