/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I
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

    int min{1000*1000*1000};  // something too big
    for (int i{}; i < n; ++i) {
      for (int j{i + 1}; j < n; ++j) {
        int x{a[i] + a[j] + j - i};
        if (x < min) {
          min = x;
        }
      }
    }

    std::cout << min << '\n';
  }

  return 0;
}
