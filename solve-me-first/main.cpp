#include <iostream>

using namespace std;

int solveMeFirst(int n_1,
                 int n_2) {
  return n_1 + n_2;
}

int main(void) {
  int n_1;
  int n_2;

  cin >> n_1 >> n_2;

  int n_sum = solveMeFirst(n_1, n_2);

  cout << n_sum << endl;

  return 0;
}
