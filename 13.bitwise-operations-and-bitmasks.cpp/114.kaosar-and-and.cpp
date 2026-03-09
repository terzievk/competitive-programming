/* copyright
   Source:
   https://eolymp.com/en/problems/12324
 */
#include <bits/stdc++.h>

// funny riddle hahahahahahahhaha
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int t;
  std::cin >> t;
  for (int i{}; i < t; ++i) {
    int n;
    std::cin >> n;
    int max{};
    for (int i{}; i < n; ++i) {
      int x;
      std::cin >> x;

      if (x > max) {
        max = x;
      }
    }

    std::cout << max << '\n';
  }
  return 0;
}
