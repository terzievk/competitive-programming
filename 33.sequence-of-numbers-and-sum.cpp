/* copyright
   Source:

*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  while (true) {
    int n;
    int m;
    std::cin >> n >> m;

    if (n <= 0 || m <= 0) {
      return 0;
    }

    if (m < n) {
      int temp{m};
      m = n;
      n = temp;
    }

    int sum{};
    for (int i{n}; i <= m; ++i) {
      std::cout << i << ' ';
      sum += i;
    }

    std::cout << "sum =" << sum << '\n';
  }

  return 0;
}
