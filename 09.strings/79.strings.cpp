/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/D
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  std::string a, b;
  std::cin >> a >> b;

  std::cout << a.size() << ' ' << b.size() << '\n';

  std::cout << a + b << '\n';

  std::swap(a[0], b[0]);
  std::cout << a << ' ' << b << '\n';

  return 0;
}
