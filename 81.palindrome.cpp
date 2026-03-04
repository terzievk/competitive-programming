/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  std::string s;
  std::cin >> s;
  for (size_t i{}; i <= s.size()/2; ++i) {
    if (s[i] != s[s.size() - 1 - i]) {
      std::cout << "NO\n";

      return 0;
    }
  }

  std::cout << "YES\n";

  return 0;
}
