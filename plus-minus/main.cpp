#include <iostream>

using namespace std;

int main(void) {
  int n_t;
  int n_p(0);
  int n_n(0);

  cin >> n_t;

  for(int n_i(0), n_v; n_i < n_t; ++n_i) {
    cin >> n_v;

    if(n_v > 0)
      ++n_p;
    else if(n_v < 0)
      ++n_n;
  }

  cout << (float)n_p / n_t << endl
       << (float)n_n / n_t << endl
       << (float)(n_t - n_p - n_n) / n_t << endl;
  
  return 0;
}
