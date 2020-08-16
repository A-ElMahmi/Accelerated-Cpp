#include <iostream>
#include <vector>
#include <stdexcept>
#include "Student_info.h"
#include "grade.h"

using std::istream;
using std::vector;
using std::domain_error;

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

  try {
    s.final_grade = grade(s.midterm, s.final, s.homework);
  } catch (domain_error) {
    s.errors = true;
  }

  return is;
}

bool compare(const Student_info& x, const Student_info& y) {
  return x.name < y.name;
}