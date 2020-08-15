// clang++-7 -pthread -std=c++17 -o main main.cpp read_words.cpp
#include <iostream>
#include <string>
#include <vector>
#include "read_words.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
  vector<string> words;
  typedef vector<string>::size_type vec_sz;
  vector<vec_sz> wordCount;

  cout << "Enter words: ";
  read_words(cin, words);
  
  vec_sz size = words.size();
  cout << "Total words: " << size << endl;
  if (size == 0)
    return 0;

  // Count words
  for (vec_sz i = 0; i != size; ++i) {
    vec_sz count = 0;
    for (vec_sz j = 0; j != size; ++j) {
      if (words[i] == words[j])
        ++count;
    }
    wordCount.push_back(count);
  }

  // Display words
  for (vec_sz i = 0; i != size; ++i) {
    cout << words[i] << ": " << wordCount[i] << endl;
  }

  return 0;
}