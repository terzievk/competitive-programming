/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int x{};
  int even{};
  int odd{};
  int pos{};
  int neg{};

  int n{};
  std::cin >> n;
  for (int i{}; i < n; ++i) {
    std::cin >> x;
    if (x % 2) {
      ++odd;
    } else {
      ++even;
    }

    if (x > 0) {
      ++pos;
    }
    if (x < 0) {
      ++neg;
    }
  }

  std::cout << "Even: "    << even << '\n';
  std::cout << "Odd: "      << odd << '\n';
  std::cout << "Positive: " << pos << '\n';
  std::cout << "Negative: " << neg << '\n';

  return 0;
}
