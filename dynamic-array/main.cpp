#include <iostream>
#include <vector>

using namespace std;

int main(void) {
  int          n_n;
  int          n_q;
  int          n_l(0);
  vector<int> *m;

  cin >> n_n >> n_q;

  m = new vector<int>[n_n];

  if(m) {
    for(int n_i(0); n_i < n_q; ++n_i) {
      int n_t;
      int n_x;
      int n_y;

      cin >> n_t >> n_x >> n_y;

      if(1 == n_t) {
        int n_s((n_x ^ n_l) % n_n);

        m[n_s].push_back(n_y);
      } else {
        int          n_s((n_x ^ n_l) % n_n);
        vector<int> &s(m[n_s]);

        n_l = s[n_y % s.size()];

        cout << n_l << endl;
      }
    }

    delete[] m;
  }
  
  return 0;
}
