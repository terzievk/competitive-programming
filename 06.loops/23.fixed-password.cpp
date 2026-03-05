/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/D
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  //  std::cin.tie(NULL);

  int x{};

  while (true) {
    std::cin >> x;
    if (x == 1999) {
      std::cout << "Correct\n";
      return 0;
    }

    std::cout << "Wrong\n";
  }
  return 0;
}
