#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::sort;

int main() {
  cout << "Please enter a set of whole numbers: ";
  
  vector<int> nums;
  typedef vector<int>::size_type vec_sz;

  int x;

  while (cin >> x)
    nums.push_back(x);

  vec_sz size = nums.size();

  if (size == 0) {
    cout << "You must enter a set of values. Please try again." << endl;
    return 1;
  }

  sort(nums.begin(), nums.end());

  vec_sz mid = size / 2;
  int median = size % 2 == 0 ? (nums[mid] + nums[mid-1]) / 2
                             : nums[mid];

  // vec_sz lower_mid = 
  
  return 0;
}
