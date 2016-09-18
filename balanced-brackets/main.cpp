#include <iostream>
#include <string>
#include <stack>

using namespace std;

static bool balance_brackets(string &i) {
  stack<char> s;

  for(string::iterator i_i(i.begin()); i.end() != i_i; ++i_i) {
    if(('(' == *i_i) ||
       ('{' == *i_i) ||
       ('[' == *i_i))
      s.push(*i_i);
    else {
      switch(*i_i) {
      case ')': {
        if(!s.empty() && ('(' == s.top()))
          s.pop();
        else return false;
      } break;

      case '}': {
        if(!s.empty() && ('{' == s.top()))
          s.pop();
        else return false;
      } break;

      case ']': {
        if(!s.empty() && ('[' == s.top()))
          s.pop();
        else return false;
      } break;
      }
    }
  }
  
  return s.empty();
}

int main(void) {
  int n_n;

  cin >> n_n;

  while(n_n--) {
    string s;

    cin >> s;

    if(balance_brackets(s))
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  
  return 0;
}
