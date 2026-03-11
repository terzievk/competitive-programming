/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/C
 */
#include <bits/stdc++.h>

void print(int n) {
  if (!n) {
    return;
  }

  std::cout << n;
  if (n > 1) {
    std::cout << ' ';
  }
  print(n - 1);

  return;
}
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  std::cin >> n;

  print(n);
  return 0;
}
