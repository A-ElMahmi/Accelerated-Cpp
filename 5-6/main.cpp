#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <ios>
#include <iomanip>
#include <stdexcept>
#include <chrono>
#include <algorithm>
#include "grade.h"
#include "Student_info.h"
#include "fails.h"

using std::cout;
using std::endl;
using std::ifstream;
using std::string;
using std::vector;
using std::streamsize;
using std::setprecision;
using std::domain_error;
using std::max;
using std::sort;

int main() {
  vector<Student_info> students;
  Student_info record;
  string::size_type maxLen = 0;

  ifstream fin("large.txt");

  while (read(fin, record)) {
    maxLen = max(maxLen, record.name.size());
    students.push_back(record);
  }
  
  sort(students.begin(), students.end(), compare);

  // cout << "Passed:" << endl;
  // for (vector<Student_info>::size_type i  = 0; i != students.size(); ++i) {
  //   cout << students[i].name << ": " << grade(students[i]) << endl;
  // }

  // cout << "\nFailed:" << endl;
  // for (vector<Student_info>::size_type i  = 0; i != fails.size(); ++i) {
  //   cout << fails[i].name << ": " << grade(fails[i]) << endl;
  // }

  typedef std::chrono::high_resolution_clock clock;
  
  auto t1 = clock::now();
  vector<Student_info> fails = extract_fails2(students);
  auto t2 = clock::now();

  auto duration = std::chrono::duration_cast<std::chrono::microseconds>(t2 - t1).count();

  cout << "Total time: " << duration /*/ 100000*/ << " last digit is decimal" << endl;

  return 0;
}