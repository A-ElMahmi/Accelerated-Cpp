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

bool has_letters(const string& s, const string letters) {
  for (string::const_iterator i = s.begin(); i != s.end(); ++i)
    for (string::const_iterator j = letters.begin(); j != letters.end(); ++j)
      if (*i == *j)
        return true;
  
  return false;
}

bool has_ascenders(const string& s) {
  return has_letters(s, "bdfhklt");
}

bool has_descenders(const string& s) {
  return has_letters(s, "gjpqy");
}

int main() {
  ifstream fin("words.txt");
  vector<string> words = read_words(fin);
  
  string longest;
  for (vector<string>::size_type i = 0; i != words.size(); ++i) {
    if (!has_ascenders(words[i]) && !has_descenders(words[i])) {
      if (words[i].size() > longest.size()) {
        longest = words[i];
      }  
    }
  }

  cout << "Longest word without ascenders of descenders: " << longest << endl;

  return 0;
}

