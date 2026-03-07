/* copyright
   Source:
   https://cses.fi/problemset/task/1617
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  std::cin >> n;

  int result{1};
  for (int i{}; i < n; ++i) {
    result <<= 1;
    result %= 1000000007;
  }

  std::cout << result << '\n';
  return 0;
}
