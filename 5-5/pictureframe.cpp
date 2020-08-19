#include <string>
#include <cctype>
#include <vector>
#include <algorithm>

using std::string;
using std::isspace;
using std::vector;
using std::max;


string::size_type width(const vector<string>& vec) {
  string::size_type maxLen = 0;
  for (vector<string>::const_iterator it = vec.begin(); it != vec.end(); ++it)
    maxLen = max(maxLen, it->size());

  return maxLen;
}

vector<string> split(const string& s) {
  vector<string> ret;
  typedef string::size_type str_size;
  str_size i = 0;

  while (i != s.size()) {
    while (i != s.size() && isspace(s[i]))
      ++i;

    str_size j = i;
    while (j != s.size() && !isspace(s[j]))
      ++j;

    if (i != j) {
      ret.push_back(s.substr(i, j-i));
      i = j;
    }
  }

  return ret;
}

vector<string> frame(const vector<string>& vec) {
  vector<string> ret;
  string::size_type maxLen = width(vec);
  string border(maxLen + 4, '*');
  
  ret.push_back(border);

  for (vector<string>::const_iterator it = vec.begin(); it != vec.end(); ++it) {
    ret.push_back("* " + *it + string(maxLen - it->size(), ' ') + " *");
  }

  ret.push_back(border);
  return ret;
}

vector<string> vcat(const vector<string>& top, const vector<string>& bottom) {
  vector<string> ret = top;
  ret.insert(ret.end(), bottom.begin(), bottom.end());

  return ret;
}

vector<string> hcat(const vector<string>& left, const vector<string>& right) {
  vector<string> ret;
  string::size_type maxLen = width(left) + 1;
  vector<string>::size_type i = 0, j = 0;

  while (i != left.size() && j != right.size()) {
    ret.push_back(left[i] + string(maxLen - left[i].size(), ' ') + right[j]);
    ++i; ++j;
  }

  for (i = i; i != left.size(); ++i) {
    ret.push_back(left[i]);
  }

  for (j = j; j != right.size(); ++j) {
    ret.push_back(string(maxLen, ' ') + right[j]);
  }

  return ret;
}

vector<string> centre(const vector<string>& vec) {
  vector<string> ret;
  typedef string::size_type str_sz;
  str_sz maxLen = width(vec);

  for (vector<string>::const_iterator it = vec.begin();
        it != vec.end(); ++it) {
    str_sz diff = maxLen - it->size();
    
    if (diff == 0) {
      ret.push_back(*it);
    } else {
      str_sz left = diff / 2;
      str_sz right = diff % 2 == 0 ? left : left + 1;
      ret.push_back(string(left, ' ') + *it + string(right, ' '));
    }
  }

  return ret;
}