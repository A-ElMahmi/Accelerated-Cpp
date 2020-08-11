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

  vec_sz lower_mid = mid / 2;
  int lower = mid % 2 == 0 ? (nums[lower_mid] + nums[lower_mid-1]) / 2
                                 : nums[lower_mid];

  vec_sz upper_mid = mid + (mid / 2);
  int upper = (size-mid-1) % 2 == 0 ? (nums[upper_mid] + nums[upper_mid-1]) / 2
                                 : nums[upper_mid];

  
  cout << "Lower quartile: " << lower << endl
       << "Median: " << median << endl
       << "Upper quartile: " << upper << upper_mid << endl;
  
  return 0;
}
