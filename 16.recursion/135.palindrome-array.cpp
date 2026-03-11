/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/R
 */
#include <bits/stdc++.h>

bool isPal(int n) {
  if (n == 0) {
    return true;
  }

  if (n == 1) {
    int x;
    std::cin >> x;
    return true;
  }

  int x, y;
  std::cin >> x;
  bool ans{isPal(n - 2)};
  std::cin >> y;

  return ans && (x == y);
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  std::cin >> n;
  std::cout << (isPal(n) ? "YES" : "NO") << '\n';
  return 0;
}
