/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/N
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  char s;
  int n;
  std::cin >> s >> n;

  for (int i{}; i < n; ++i) {
    int x;
    std::cin >> x;
    for (int i{}; i < x; ++i) {
      std::cout << s;
    }
    std::cout << '\n';
  }

  return 0;
}
