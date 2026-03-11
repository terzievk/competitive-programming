/* copyright
   Source:
   https://codeforces.com/problemset/problem/579/A
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  std::cin >> n;

  int count{};
  while (n) {
    count += n & 1;
    n >>= 1;
  }

  std::cout << count << '\n';
  return 0;
}
