/* copyright
   Source:
   https://vjudge.net/problem/HackerRank-ctci-bubble-sort
 */
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int a[600];

  int n;
  std::cin >> n;

  for (int i{}; i < n; ++i) {
    std::cin >> a[i];
  }

  int swaps{};
  for (int i{}; i < n - 1; ++i) {
    for (int j{}; j + i < n - 1; ++j) {
      if (a[j] > a[j + 1]) {
        std::swap(a[j], a[j + 1]);
        ++swaps;
      }
    }
  }

  std::cout << "Array is sorted in " << swaps << " swaps.\n";
  std::cout << "First Element: " << a[0] << '\n';
  std::cout << "Last Element: " << a[n - 1] << '\n';
  return 0;
}
