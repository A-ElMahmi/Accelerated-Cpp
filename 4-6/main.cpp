#include <iostream>
#include <string>
#include <vector>
#include <ios>
#include <iomanip>
#include <stdexcept>
#include <algorithm>
#include "grade.h"
#include "Student_info.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::streamsize;
using std::setprecision;
using std::domain_error;
using std::sort;
using std::max;

int main() {
  vector<Student_info> students;
  Student_info record;
  string::size_type maxLen = 0;

  while (read(cin, record)) {
    maxLen = max(maxLen, record.name.size());
    students.push_back(record);
  }
  
  sort(students.begin(), students.end(), compare);

  for (vector<Student_info>::size_type i = 0; i != students.size(); ++i) {
    cout << students[i].name 
         << string(maxLen+1 - students[i].name.size(), ' ');

    if (students[i].errors == false) {
      streamsize prec = cout.precision();
      cout << setprecision(3) << students[i].final_grade 
           << setprecision(prec);
    
    } else {
      cout << "Student has done no homework.";
    }

    cout << endl;
  }

  return 0;
}