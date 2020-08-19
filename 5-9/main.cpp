#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::islower;
using std::sort;


bool compare(const string& x, const string& y) {
  return islower(x[0]);
}

int main() {
  vector<string> words;
  string s;

  while (cin >> s)
    words.push_back(s);

  sort(words.begin(), words.end(), compare); 

  for (vector<string>::size_type i = 0; i != words.size(); ++i) {
    cout << words[i] << endl;
  }
  
  return 0;
}

