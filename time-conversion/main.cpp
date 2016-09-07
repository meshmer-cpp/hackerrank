#include <iostream>
#include <iomanip>
#include <string>
#include <regex>

using namespace std;

int main(void) {
  string sz_time;
  regex  o_regex("([[:digit:]]{2})\\:([[:digit:]]{2})\\:([[:digit:]]{2})(AM|PM)");
  smatch o_match;

  cin >> sz_time;

  if(regex_match(sz_time, o_match, o_regex)) {
    int    n_hour(stoi(o_match[1]));
    int    n_minute(stoi(o_match[2]));
    int    n_second(stoi(o_match[3]));
    string sz_meridiem(o_match[4]);

    if(("AM" == sz_meridiem) &&
       (12 == n_hour))
      n_hour = 0;
    else if(("PM" == sz_meridiem) &&
            (12 > n_hour))
      n_hour += 12;

    cout << setfill('0') << setw(2) << n_hour   << ":"
         << setfill('0') << setw(2) << n_minute << ":"
         << setfill('0') << setw(2) << n_second << endl;
  }
  
  return 0;
}
