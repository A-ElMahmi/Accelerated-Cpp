#ifndef GUARD_Student_info_h
#define GUARD_Student_info_h

#include <iostream>
#include <vector>
#include <list>
#include <string>

struct Student_info {
  std::string name;
  double midterm, final;
  std::vector<double> homework;
};

std::istream& read_hw(std::istream&, std::vector<double>&);
std::istream& read(std::istream&, Student_info&);
bool compare(const Student_info&, const Student_info&);
void sort_students(std::vector<Student_info>&);
void sort_students(std::list<Student_info>&);

#endif