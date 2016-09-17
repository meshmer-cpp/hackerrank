#include <iostream>

using namespace std;

int main(void) {
  int  n_1;
  int  n_2;
  int  n_3;
  int *p_1;

  cin >> n_1 >> n_2 >> n_3;

  p_1 = new int[n_1];

  if(p_1) {
    int *p_2 = new int[n_2];

    if(p_2) {
      int *p_3 = new int[n_3];

      if(p_3) {
        int n_s1(0);
        int n_s2(0);
        int n_s3(0);
        int n_i1(0);
        int n_i2(0);
        int n_i3(0);
        
        for(int n_i(0); n_i < n_1; ++n_i) {
          cin >> p_1[n_i];

          n_s1 += p_1[n_i];
        }
        
        for(int n_i(0); n_i < n_2; ++n_i) {
          cin >> p_2[n_i];

          n_s2 += p_2[n_i];
        }
        
        for(int n_i(0); n_i < n_3; ++n_i) {
          cin >> p_3[n_i];

          n_s3 += p_3[n_i];
        }

        while((n_i1 < n_1) && (n_i2 < n_2) && (n_i3 < n_3)) {
          if((n_s1 == n_s2) &&
             (n_s2 == n_s3))
            break;
          else {
            int n_max(n_s1 > n_s2 ? n_s1 : n_s2);

            if(n_max < n_s3)
              n_max = n_s3;

            if(n_max == n_s1)
              n_s1 -= p_1[n_i1++];
            else if(n_max == n_s2)
              n_s2 -= p_2[n_i2++];
            else
              n_s3 -= p_3[n_i3++];
          }
        }

        if((n_i1 == n_1) ||
           (n_i2 == n_2) ||
           (n_i3 == n_3))
          cout << 0 << endl;
        else
          cout << n_s1 << endl;

        delete[] p_3;
      }

      delete[] p_2;
    }
    
    delete[] p_1;
  }
  
  return 0;
}
