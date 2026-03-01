/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/W
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  std::cin >> n;

  for (int i{}; i < n; ++i) {
    for (int j{}; j < n - 1 - i; ++j) {
      std::cout << ' ';
    }

    for (int j{}; j < i * 2 + 1; ++j) {
      std::cout << '*';
    }

    std::cout << '\n';
  }

  // just edit the i range from the above for
  for (int i{n-1}; i >= 0; --i) {
    for (int j{}; j < n - 1 - i; ++j) {
      std::cout << ' ';
    }

    for (int j{}; j < i * 2 + 1; ++j) {
      std::cout << '*';
    }

    std::cout << '\n';
  }

  return 0;
}
