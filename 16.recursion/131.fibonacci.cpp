/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/O
 */
#include <bits/stdc++.h>

int64_t fib(int64_t n) {
  if (n == 1) {
    return 0;
  }

  if (n == 2) {
    return 1;
  }

  return fib(n - 1) + fib(n - 2);
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int64_t n;
  std::cin >> n;

  std::cout << fib(n) << '\n';
  return 0;
}
