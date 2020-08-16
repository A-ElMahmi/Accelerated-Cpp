#include <iostream>
#include <vector>
#include <stdexcept>
#include "average.h"

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::domain_error;


int main() {
  cout << "Enter a list of numbers: ";
  vector<double> nums;
  double x;

  while (cin >> x) {
    nums.push_back(x);
  }

  try {
    double avg = average(nums);
    cout << "The average is: " << avg << endl;
  } catch (domain_error e) {
    cout << e.what() << endl;
    return 1;
  }

  return 0;
}