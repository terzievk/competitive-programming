/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/P
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  std::cin >> n;

  for (int i{0}; i < n; ++i) {
    for(int j{0}; j < n - i; ++j) {
      std::cout << '*';
    }
    std::cout << '\n';
  }

  return 0;
}
