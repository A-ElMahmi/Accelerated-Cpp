#include <iostream>
#include <vector>
#include "Student_info.h"

using std::istream;
using std::vector;

istream& read_hw(istream& input, vector<double>& hw) {
  if (input) {
    hw.clear();
    
    double x;
    while (input >> x)
      hw.push_back(x);
    
    input.clear();
  }

  return input;
}

istream& read(istream& is, Student_info& s) {
  is >> s.name >> s.midterm >> s.final;

  read_hw(is, s.homework);
  return is;
}

bool compare(const Student_info& x, const Student_info& y) {
  return x.name < y.name;
}
