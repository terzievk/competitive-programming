// copyright
// Source:
// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Y

#include <iostream>

int main() {
  int64_t a;
  int64_t b;
  int64_t c;
  int64_t d;

  std::cin >> a >> b >> c >> d;

  a %= 100;
  b %= 100;
  c %= 100;
  d %= 100;

  std::cout << (a * b * c * d) % 100 << '\n';

  return 0;
}
