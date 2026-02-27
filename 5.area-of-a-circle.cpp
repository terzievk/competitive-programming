// copyright
// Source:
// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/E

#include<iostream>
#include<iomanip>

int main() {
  const double pi {3.141592653};

  std::cout << std::fixed << std::setprecision(9);

  double r;
  std::cin >> r;
  std::cout << pi * r * r << '\n';

  return 0;
}
