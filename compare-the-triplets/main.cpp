#include <iostream>

using namespace std;

int main(void) {
  int a_a[3];
  int a_b[3];

  cin >> a_a[0] >> a_a[1] >> a_a[2];
  cin >> a_b[0] >> a_b[1] >> a_b[2];

  int n_a(0);
  int n_b(0);

  for(int n_i(0); n_i < 3; ++n_i) {
    if(a_a[n_i] > a_b[n_i])
      ++n_a;
    else if(a_a[n_i] < a_b[n_i])
      ++n_b;
  }

  cout << n_a << " " << n_b << endl;
  
  return 0;
}
