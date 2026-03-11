/* copyright
   Source:
   https://vjudge.net/problem/UVA-12455
 */
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int t;
  std::cin >> t;

  int bars[20];
  for (int i{}; i < t; ++i) {
    int n;
    std::cin >> n;

    int p;
    std::cin >> p;

    for (int i{}; i < p; ++i) {
      std::cin >> bars[i];
    }

    for (int i{}; i < (1 << p); ++i) {
      int sum{};
      for (int j{}; j < p; ++j) {
        if ((i & (1 << j))) {
          sum += bars[j];
        }
      }

      // std::cout << sum << std::endl;
      if (sum == n) {
        std::cout << "YES\n";

        goto label;
      }
    }
    std::cout << "NO\n";
  label:;
  }

  return 0;
}
