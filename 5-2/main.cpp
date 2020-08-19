#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include <ios>
#include <iomanip>
#include <stdexcept>
#include <chrono>
#include "grade.h"
#include "Student_info.h"
#include "fails.h"

using std::cout;
using std::endl;
using std::ifstream;
using std::string;
using std::list;
using std::streamsize;
using std::setprecision;
using std::domain_error;
using std::max;

int main() {
  list<Student_info> students;
  Student_info record;
  string::size_type maxLen = 0;

  ifstream fin("large.txt");

  while (read(fin, record)) {
    maxLen = max(maxLen, record.name.size());
    students.push_back(record);
  }
  
  students.sort(compare);

  typedef std::chrono::high_resolution_clock clock;
  
  auto t1 = clock::now();
  list<Student_info> fails = extract_fails(students);
  auto t2 = clock::now();

  auto duration = std::chrono::duration_cast<std::chrono::microseconds>(t2 - t1).count();

  cout << "Total time: " << duration /*/ 100000*/ << " last digit is decimal" << endl;

  return 0;
}