/* copyright
   Source:
   https://cses.fi/problemset/task/1068
 */
#include <bits/stdc++.h>

void collatz(int64_t n) {
  std::cout << n << ' ';

  if (n == 1) {
    return;
  }

  if (n & 1) {
    collatz(3*n + 1);
  } else {
    collatz(n/2);
  }

  return;
}
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int64_t n;
  std::cin >> n;
  collatz(n);
  return 0;
}
