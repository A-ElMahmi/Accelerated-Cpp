#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;


int main() {
  cout << "Enter a list of words: ";

  vector<string> words;
  typedef vector<string>::size_type vec_sz;
  string x;

  while (cin >> x)
    words.push_back(x);
  
  
  string shortest, longest;

  for (vec_sz i = 0; i != words.size(); ++i) {
    if (i == 0) {
      shortest = words[0];
      longest = words[0];
    }

    if (words[i].size() < shortest.size())
      shortest = words[i];

    if (words[i].size() > longest.size())
      longest = words[i];
  }

  cout << "The shortest word is " << shortest
       << " and the longest word is " << longest << endl;
  
  return 0;
}
