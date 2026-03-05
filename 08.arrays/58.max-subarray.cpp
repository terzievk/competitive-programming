/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/L
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int t;
  std::cin >> t;

  for(int i{}; i < t; ++i) {
    int n;
    std::cin >> n;

    int a[100];
    for (int i{}; i < n; ++i) {
      std::cin >> a[i];
    }

    for (int i{1}; i <= n; ++i) {
      for (int j{}; j < n - i + 1; ++j) {
        int max{-1000*1000};  // something small
        for (int k{}; k < i; ++k) {
          if (a[j+k] > max) {
            max = a[j+k];
          }
        }
        std::cout << max << ' ';
      }
    }
    std::cout << '\n';
  }

  return 0;
}
