/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  // // 'A' is 65 and 'a' is 97
  // std::cout << static_cast<int>('A') << std::endl;
  // std::cout << static_cast<int>('a') << std::endl;

  char x;
  std::cin >> x;

  if (x >= 'a' && x <= 'z') {
    std::cout << static_cast<char>(x - 32) << '\n';
  } else {
    std::cout << static_cast<char>(x + 32) << '\n';
  }

  return 0;
}
