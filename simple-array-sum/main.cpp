#include <iostream>

using namespace std;

int main(void) {
  int n_n;
  int n_sum(0);

  cin >> n_n;

  for(int n_i(0), n_t; n_i < n_n; ++n_i) {
    cin >> n_t;

    n_sum += n_t;
  }

  cout << n_sum << endl;
  
  return 0;
}
