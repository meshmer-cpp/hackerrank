#include <iostream>
#include <stack>
#include <set>

using namespace std;

int main(void) {
  int           n_n;
  int           n_o;
  stack<int>    s;
  multiset<int> max;

  cin >> n_n;

  while(n_n--) {
    cin >> n_o;

    switch(n_o) {
    case 1: {
      int n_v(0);

      cin >> n_v;

      s.push(n_v);
      max.insert(n_v);
    } break;

    case 2: {
      max.erase(max.find(s.top()));
      
      s.pop();
    } break;

    case 3: {
      cout << *max.rbegin() << endl;
    } break;
    }
  }
  
  return 0;
}
