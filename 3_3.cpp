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

  for (vec_sz i = 0; i != words.size(); ++i) {
    vec_sz same_word_count = 0;
    for (vec_sz j = 0; j != i; ++j) {
      if (words[i] == words[j])
        ++same_word_count;
    }

    if (same_word_count == 0)
      ++distinct_words;
  }


  cout << "There are " << distinct_words << "distinct words." << endl;
  
  return 0;
}
