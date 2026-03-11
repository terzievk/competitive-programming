/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/W
 */
#include <bits/stdc++.h>

bool reachable(int64_t from, int64_t n) {
  if (from > n) {
    return false;
  }

  if (from == n) {
    return true;
  }

  return reachable(from*10, n) || reachable(from*20, n);
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int t;
  std::cin >> t;
  for (int i{}; i < t; ++i) {
    int64_t n;
    std::cin >> n;
    std::cout << (reachable(1, n) ? "YES" : "NO") << '\n';
  }

  return 0;
}
