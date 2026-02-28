/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/B
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  std::cin >> n;

  if (n == 1) {
    std::cout << -1 << '\n';

    return 0;
  }

  for (int i{2}; i <= n; i += 2) {
    std::cout << i << '\n';
  }


  return 0;
}
