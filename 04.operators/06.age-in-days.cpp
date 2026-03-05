/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/R
*/
#include <iostream>

int main() {
  int d;

  std::cin >> d;

  std::cout << d / 365 << " years\n";
  d %= 365;
  std::cout << d / 30 << " months\n";
  d %= 30;
  std::cout << d << " days\n";


  return 0;
}
