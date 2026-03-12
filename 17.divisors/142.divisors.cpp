/* copyright
   Source:
   https://vjudge.net/problem/Gym-405759K
 */
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  std::cin >> n;

  for (int i{1}; i <= n/2; ++i) {
    if ((n % i) == 0) {
      std::cout << i << '\n';
    }
  }

  std::cout << n << '\n';
  return 0;
}
