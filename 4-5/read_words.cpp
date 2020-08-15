#include <iostream>
#include <string>
#include <vector>
#include "read_words.h"

using std::istream;
using std::string;
using std::vector;

istream& read_words(istream& input, vector<string>& vec) {
  vec.clear();
  string x;

  while (input >> x) {
    vec.push_back(x);
  }

  input.clear();
  
  return input;
}