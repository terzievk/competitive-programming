/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/K
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  std::cin >> n;

  for (int i{}; i < n; ++i) {
    std::string s, t;
    std::cin >> s >> t;

    size_t len{s.size() > t.size() ? s.size() : t.size()};

    for (size_t i{}; i < len; ++i) {
      if (i < s.size()) {
        std::cout << s[i];
      }

      if (i < t.size()) {
        std::cout << t[i];
      }
    }

    std::cout << '\n';
  }

  return 0;
}
