/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/J
 */
#include <bits/stdc++.h>

int64_t fact(int64_t n) {
  if (n == 1) {
    return 1;
  }

  return n * fact(n - 1);
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int64_t n;
  std::cin >> n;

  std::cout << fact(n) << '\n';
  return 0;
}
