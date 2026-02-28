/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int a;
  char c;
  int b;
  std::cin >> a >> c >> b;

  if (c == '>') {
    if (a > b) {
      std::cout << "Right\n";
    } else {
      std::cout << "Wrong\n";
    }
  }

  if (c == '<') {
    if (a < b) {
      std::cout << "Right\n";
    } else {
      std::cout << "Wrong\n";
    }
  }

  if (c == '=') {
    if (a == b) {
      std::cout << "Right\n";
    } else {
      std::cout << "Wrong\n";
    }
  }

  return 0;
}
