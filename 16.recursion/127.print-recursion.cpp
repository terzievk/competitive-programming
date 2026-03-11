/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/A
 */
#include <bits/stdc++.h>

void print(int n) {
  std::cout << "I love Recursion\n";
  if (n) {
    print(n - 1);
  }

  return;
}
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  std::cin >> n;

  print(n - 1);
  return 0;
}
