#include <iostream>

using namespace std;

int main(void) {
  int  n_n;
  int *p_n;

  cin >> n_n;

  p_n = new int[n_n];

  if(p_n) {
    for(int n_i(0); n_i < n_n; ++n_i)
      cin >> p_n[n_i];

    for(int n_i(n_n - 1); n_i >= 0; --n_i)
      cout << p_n[n_i] << " ";

    cout << endl;
    
    delete[] p_n;
  }
  
  return 0;
}
