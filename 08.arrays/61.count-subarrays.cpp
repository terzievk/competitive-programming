/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Q
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int t;
  std::cin >> t;

  for (int i{}; i < t; ++i) {
    int n;
    std::cin >> n;

    int a[100];

    for (int i{}; i < n; ++i) {
      std::cin >> a[i];
    }

    int count{};
    for (int i{}; i < n; ++i) {
      int c{};
      int last{-1000*1000*1000};
      for (int j{i}; j < n; ++j) {
        if (a[j] < last) {
          break;
        }

        last = a[j];
        ++c;
      }
      count += c;
    }

    std::cout << count << '\n';
  }

  return 0;
}
