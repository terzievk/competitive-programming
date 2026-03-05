/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/G
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  char c;
  while (std::cin >> c) {
    if (c == ',') {
      c = ' ';
    } else if (c >= 'a' && c <= 'z') {
      c -= 'a';
      c += 'A';
    } else if (c >= 'A' && c <= 'Z') {
      c -= 'A';
      c += 'a';
    }

    std::cout << c;
  }

  return 0;
}
