#ifndef GUARD_Student_info_h
#define GUARD_Student_info_h

#include <iostream>
#include <vector>
#include <string>

struct Student_info {
  std::string name;
  double midterm, final, final_grade;
  std::vector<double> homework;
  bool errors = false;
};

std::istream& read_hw(std::istream&, std::vector<double>&);
std::istream& read(std::istream&, Student_info&);
bool compare(const Student_info&, const Student_info&);

#endif