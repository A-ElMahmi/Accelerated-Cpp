#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;


int main() {
  cout << "Enter a list of distinct words: ";

  vector<string> words;
  typedef vector<string>::size_type vec_sz;
  string x;

  while (cin >> x)
    words.push_back(x);
  
  
  vec_sz distinct_words;

  
  
  return 0;
}
