/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/H
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

    if (s.contains("010") || s.contains("101")) {
      std::cout << "Good\n";
    } else {
      std::cout << "Bad\n";
    }
  }

  return 0;
}
