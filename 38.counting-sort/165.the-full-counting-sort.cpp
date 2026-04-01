/* copyright
   Source:
   https://vjudge.net/problem/HackerRank-countingsort4
 */

#include <bits/stdc++.h>


int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  std::cin >> n;

  std::vector<std::string> v[100] {};

  for (int i{}; i < n; ++i) {
    int x;
    std::string s;

    std::cin >> x >> s;

    if (i < n/2) {
      s = '-';
    }

    v[x].push_back(s);
  }

  for (int i{}; i < 100; ++i) {
    for (std::string each : v[i]) {
      std::cout << each << ' ';
    }
  }
  std::cout << '\n';

  return 0;
}
