#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(void) {
  int              n_n;
  int              n_q;
  map<string, int> m;

  cin >> n_n;

  for(int n_i(0); n_i < n_n; ++n_i) {
    string s;

    cin >> s;

    map<string, int>::iterator i(m.find(s));

    if(m.end() == i)
      m.insert(pair<string, int>(s, 1));
    else
      ++i->second;
  }

  cin >> n_q;

  for(int n_i(0); n_i < n_q; ++n_i) {
    string s;

    cin >> s;

    map<string, int>::iterator i(m.find(s));

    if(m.end() == i)
      cout << 0 << endl;
    else
      cout << i->second << endl;
  }
  
  return 0;
}
