#include <iostream>
#include <vector>
#include "Student_info.h"
#include "grade.h"

using std::vector;

bool fgrade(const Student_info& s) {
  if (s.homework.size() == 0) {
    std::cout << s.name << std::endl;
  }
  return grade(s) < 60;
}

vector<Student_info> extract_fails1(vector<Student_info>& students) {
  vector<Student_info> fails;
  vector<Student_info>::size_type i = 0;

  while (i != students.size()) {
    if (fgrade(students[i])) {
      fails.push_back(students[i]);
      students.erase(students.begin() + i);
    } else {
      ++i;
    }
  }

  return fails;
}

vector<Student_info> extract_fails2(vector<Student_info>& students) {
  vector<Student_info> fails;
  typedef vector<Student_info>::size_type vec_sz;
  vec_sz passed = 0;

  for (vec_sz i = 0; i != students.size(); ++i) {
    if (fgrade(students[i])) {
      fails.push_back(students[i]);
    } else {
      students.insert(students.begin(), students[i]);
      ++i; ++passed;
    }
  }
  students.resize(passed);
  
  return fails;
}
