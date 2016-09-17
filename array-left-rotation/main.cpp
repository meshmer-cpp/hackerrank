#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
  int  n_n;
  int  n_d;
  int *p_a;

  cin >> n_n >> n_d;

  p_a = new int[n_n];

  if(p_a) {
    for(int n_i(0); n_i < n_n; ++n_i)
      cin >> p_a[n_i];

    n_d %= n_n;
    
    reverse(p_a, p_a + n_d);
    reverse(p_a + n_d, p_a + n_n);
    reverse(p_a, p_a + n_n);

    for(int n_i(0); n_i < n_n; ++n_i)
      cout << p_a[n_i] << " ";

    cout << endl;
    
    delete[] p_a;
  }
  
  return 0;
}
