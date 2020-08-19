#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::ifstream;
using std::vector;
using std::string;
using std::getline;


vector<string> read_words(istream& is) {
  vector<string> vec;
  
  if (is) {
    string s;
    while (getline(is, s)) {
      vec.push_back(s);
    }

    is.clear();
  }
  return vec;
}

int main() {
  ifstream fin("words.txt");
  vector<string> words = read_words(fin);
  
  string longest;
  for (vector<string>::const_iterator it = words.begin(); 
        it != words.end(); ++it) {
    if (*it == string(it->rbegin(), it->rend())) {
      // cout << *it << endl;
      if (it->size() > longest.size()) {
        longest = *it;
      }
    }
  }
  
  cout << "Longest palindrome: " << longest << endl;

  return 0;
}

