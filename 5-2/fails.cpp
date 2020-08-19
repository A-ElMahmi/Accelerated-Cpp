#include <iostream>
#include <list>
#include "Student_info.h"
#include "grade.h"

using std::list;

bool fgrade(const Student_info& s) {
  if (s.homework.size() == 0) {
    std::cout << s.name << std::endl;
  }
  return grade(s) < 60;
}

list<Student_info> extract_fails(list<Student_info>& students) {
  list<Student_info> fails;
  list<Student_info>::iterator it = students.begin();

  while (it != students.end()) {
    if (fgrade(*it)) {
      fails.push_back(*it);
      it = students.erase(it);
    } else {
      ++it;
    }
  }

  return fails;
}