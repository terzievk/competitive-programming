/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  //  std::cin.tie(NULL);

  int a[26] {0};
  char c;
  while (std::cin >> c) {
    ++a[c - 'a'];
  }

  for (int i{}; i < 26; ++i) {
    if (a[i] > 0) {
      std::cout << static_cast<char>('a' + i) << " : " << a[i] << '\n';
    }
  }

  return 0;
}
