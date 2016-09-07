#include <iostream>

using namespace std;

int main(void) {
  int n_n;

  cin >> n_n;

  int n_1(0);
  int n_2(0);
  
  for(int n_r(0); n_r < n_n; ++n_r) {
    for(int n_c(0), n_t; n_c < n_n; ++n_c) {
      cin >> n_t;

      if(n_r == n_c)
        n_1 += n_t;
      
      if(n_r == (n_n - n_c - 1))
        n_2 += n_t;
    }
  }

  if(n_1 > n_2)
    n_1 -= n_2;
  else
    n_1 = n_2 - n_1;

  cout << n_1 << endl;
  
  return 0;
}
