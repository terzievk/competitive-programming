/* copyright
   Source:
   https://vjudge.net/problem/CSES-2165
 */
#include <bits/stdc++.h>

void hanoi(int from, int to, int helper, int count) {
  if (count == 1) {
    std::cout << from << ' ' << to << '\n';
    return;
  }

  hanoi(from, helper, to, count - 1);
  std::cout << from << ' ' << to << '\n';
  hanoi(helper, to, from, count - 1);

  return;
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  std::cin >> n;
  std::cout << (1 << n) - 1 << '\n';
  hanoi(1, 3, 2, n);
  return 0;
}
