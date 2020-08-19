#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include "Student_info.h"

using std::istream;
using std::vector;
using std::list;
using std::sort;

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

void sort_students(vector<Student_info>& v) {
  sort(v.begin(), v.end(), compare);
}

void sort_students(list<Student_info>& l) {
  l.sort(compare);
}