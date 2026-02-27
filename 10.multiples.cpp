// copyright
// Source:
// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/J

#include <iostream>

int main() {
  int x;
  int y;

  std::cin >> x >> y;

  if (x % y == 0 || y % x == 0) {
    std::cout << "Multiples\n";
  } else {
    std::cout << "No Multiples\n";
  }

  return 0;
}
