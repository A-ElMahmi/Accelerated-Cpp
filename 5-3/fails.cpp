#include <list>
#include <vector>
#include "Student_info.h"
#include "grade.h"

using std::list;
using std::vector;


bool fgrade(const Student_info& s) {
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

vector<Student_info> extract_fails(vector<Student_info>& students) {
  vector<Student_info> fails;
  vector<Student_info>::iterator it = students.begin();

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
