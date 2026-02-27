/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Y
*/
#include <iostream>
#include <cstdint>

int main() {
  uint64_t a;
  uint64_t b;
  uint64_t c;
  uint64_t d;

  std::cin >> a >> b >> c >> d;

  a %= 100;
  b %= 100;
  c %= 100;
  d %= 100;


  uint64_t r{(a * b * c * d) % 100};


  if (r == 0) {
    // since a b c and d are all >= 2
    // if the result is 0 the last two digits are 00
    std::cout << "00\n";
  } else if (r < 10) {
    // since a b c and d are all >= 2
    // result can't be less than 10
    // so always add 0 if it's single digit
    std::cout << '0' << r << '\n';
  } else {
    std::cout << r << '\n';
  }
  return 0;
}
