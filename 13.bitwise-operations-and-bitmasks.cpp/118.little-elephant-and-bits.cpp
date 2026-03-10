/* copyright
   Source:
   https://vjudge.net/problem/CodeForces-258A
 */
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  //  std::cin.tie(NULL);

  char c;
  while (std::cin >> c) {
    if (c == '0') {
      break;
    }

    if (std::cin.peek() == '\n') {
      break;
    }

    std::cout << c;
  }

  while (std::cin >> c) {
    std::cout << c;
  }

  return 0;
}
