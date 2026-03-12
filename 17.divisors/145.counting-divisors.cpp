/* copyright
   Source:
   https://cses.fi/problemset/task/1713
 */
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int x;
  std::cin >> x;
  for (int j{}; j < x; ++j) {
    int n;
    std::cin >> n;
    int count{};
    int i{1};
    for (; i * i < n; ++i) {
      if (n % i == 0) {
        count += 2;
      }
    }
    count += (i * i == n);

    std::cout << count << '\n';
  }
  return 0;
}
