/* copyright
   Source:
   https://codeforces.com/problemset/problem/2124/C
 */
#include <bits/stdc++.h>

uint64_t a[600*1000];

void solve() {
  uint64_t n;
  std::cin >> n;

  for (uint64_t i{}; i < n; ++i) {
    std::cin >> a[i];
  }

  std::vector<uint64_t> difs{};

  for (uint64_t i{}; i < n - 1; ++i) {
    difs.push_back(a[i] / std::gcd(a[i+1], a[i]));
  }

  std::sort(difs.begin(), difs.end());
  auto last{std::unique(difs.begin(), difs.end())};
  difs.erase(last, difs.end());

  // lcm(a, b, c) = lcm(a, lcm(b, c)) != a * b * c / gcd(a, b, c)
  // lcm(2, 3, 4) = 12 != 24 = 2 * 3 * 4 / gcd(2, 3, 4)
  uint64_t lcm{difs[0]};
  for (size_t i{}; i < difs.size() - 1; ++i) {
    uint64_t l{difs[i] * difs[i+1] / std::gcd(difs[i], difs[i + 1])};
    lcm = lcm * l / std::gcd(lcm, l);
  }

  std::cout << lcm << '\n';
}



int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  uint64_t t;
  std::cin >> t;
  for (uint64_t i{}; i < t; ++i) {
    solve();
  }

  return 0;
}


/*

42     42     14   84     28     73080       255780
3      3      1    6      2      2*2610      7*2610
2*3*7  2*3*7  2*7  2*6*7  2*2*7  2*2*7*2610  2*7*7*2610

nice test:
1 2 84 1
 */
