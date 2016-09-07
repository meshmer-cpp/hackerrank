#include <iostream>

using namespace std;

int main(void) {
  int  n_n;
  int  n_k;
  int  n_q;
  int *p_n;

  cin >> n_n >> n_k >> n_q;

  p_n = new int[n_n];

  if(p_n) {
    for(int n_i(0); n_i < n_n; ++n_i)
      cin >> p_n[n_i];

    for(int n_i(0), n_j; n_i < n_q; ++n_i) {
      cin >> n_j;
      
      cout << p_n[((n_j + n_n) - (n_k % n_n)) % n_n] << endl;
    }
    
    delete[] p_n;
  }
  
  return 0;
}
