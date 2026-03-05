/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/K
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  std::cin >> n;


  std::cout << 1 << '\n';

  for (int i{2}; i <= n/2 + 1; ++i) {
    if (n % i == 0) {
      std::cout << i << '\n';
    }
  }

  std::cout << n << '\n';
  return 0;
}
