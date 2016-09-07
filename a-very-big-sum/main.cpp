#include <iostream>

using namespace std;

int main(void) {
  int n_n;

  cin >> n_n;

  unsigned long long int n_sum(0);
  unsigned long long int n_t;

  for(int n_i(0); n_i < n_n; ++n_i) {
    cin >> n_t;

    n_sum += n_t;
  }

  cout << n_sum << endl;
  
  return 0;
}
