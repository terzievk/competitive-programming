/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  std::cin >> n;

  int max{-1};
  for (int i{}; i < n; ++i) {
    int x;
    std::cin >> x;

    if (x > max) {
      max = x;
    }
  }

  std::cout << max << '\n';

  return 0;
}
