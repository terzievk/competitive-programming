/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/F
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int t;
  std::cin >> t;

  for (int i{}; i < t; ++i) {
    std::string s;
    std::cin >> s;

    if (s.size() <= 10) {
      std::cout << s << '\n';

      continue;
    }

    std::cout << s[0] << s.size() - 2 << s[s.size() - 1]<< '\n';
  }
  return 0;
}
