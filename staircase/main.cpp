#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(void) {
  int n_n;

  cin >> n_n;

  for(int n_i(0); n_i < n_n; ++n_i) {
    string sz_text(n_i + 1, '#');

    cout << setw(n_n) << right << sz_text << endl;
  }
  
  return 0;
}
