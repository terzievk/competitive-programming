/* copyright
   Source:
   https://cses.fi/problemset/task/1623
 */
#include <bits/stdc++.h>

int64_t dif(int64_t n, int64_t a, int64_t b) {
  if (n == 0) {
    if (a < b) {
      std::swap(a, b);
    }

    return a - b;
  }

  int x;
  std::cin >> x;

  return std::min(dif(n - 1, a + x, b), dif(n - 1, a, b + x));
}
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  std::cin >> n;
  std::cout << dif(n, 0, 0) << '\n';
  return 0;
}
