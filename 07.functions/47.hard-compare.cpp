/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Z
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  double a, b, c, d;
  std::cin >> a >> b >> c >> d;

  if (b * log(a) > d * log(c)) {
    std::cout << "YES\n";
  } else {
    std::cout << "NO\n";
  }

  return 0;
}
