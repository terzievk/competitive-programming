/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/E
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  std::cin >> n;

  int min{1000*1000};
  int minIndex{-1};
  for (int i{}; i < n; ++i) {
    int x;
    std::cin >> x;
    if (x < min) {
      min = x;
      minIndex = i + 1; // "1-index"
    }
  }

  std::cout << min << ' ' << minIndex << '\n';

  return 0;
}
