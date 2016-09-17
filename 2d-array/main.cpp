#include <iostream>

using namespace std;

int main(void) {
  int m[6][6];
  int n_max(-1);

  for(int n_i(0); n_i < 6; ++n_i) {
    for(int n_j(0); n_j < 6; ++n_j)
      cin >> m[n_i][n_j];
  }

  for(int n_i(0); n_i < 4; ++n_i) {
    for(int n_j(0); n_j < 4; ++n_j) {
      int n_sum(m[n_i][n_j] + m[n_i][n_j + 1] + m[n_i][n_j + 2]
                + m[n_i + 1][n_j + 1] + m[n_i + 2][n_j]
                + m[n_i + 2][n_j + 1] + m[n_i + 2][n_j + 2]);

      if(n_max < n_sum)
        n_max = n_sum;
    }
  }

  cout << n_max << endl;
  
  return 0;
}
