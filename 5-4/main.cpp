#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <ios>
#include <iomanip>
#include <stdexcept>
#include <chrono>
#include "grade.h"
#include "Student_info.h"
#include "fails.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::list;
using std::vector;
using std::streamsize;
using std::setprecision;
using std::domain_error;
using std::max;

typedef list<Student_info> student_container;

void display(const student_container& students) {
  for (student_container::const_iterator it = students.begin(); 
        it != students.end(); ++it) {
    cout << it->name << ": " << grade(*it) << endl;
  }
}

int main() {
  student_container students;
  Student_info record;
  string::size_type maxLen = 0;

  while (read(cin, record)) {
    maxLen = max(maxLen, record.name.size());
    students.push_back(record);
  }
  
  sort_students(students);

  student_container fails = extract_fails(students);
  
  cout << "Students:" << endl;
  display(students);

  cout << "\nFailed students: " << endl;
  display(fails);

  return 0;
}
