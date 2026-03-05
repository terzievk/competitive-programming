/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Y
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  std::cin >> n;

  if (n == 1) {
    std::cout << "0\n";

    return 0;
  }

  if (n == 2) {
    std::cout << "0 1\n";

    return 0;
  }

  std::cout << "0 1 ";

  int a{0};
  int b{1};
  for (int i{2}; i < n; ++i) {
    int temp{a + b};
    std::cout << temp << ' ';
    a = b;
    b = temp;
  }

  std::cout << '\n';

  return 0;
}
