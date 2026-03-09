/* copyright
   Source:
   https://codeforces.com/problemset/problem/1097/B
 */
#include <bits/stdc++.h>

void solve();
void findPattern();

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  std::cin >> n;
  int64_t a[15];


  for(int i{}; i < n; ++i) {
    std::cin >> a[i];
  }

  for (int i{}; i < (1 << 16); ++i) {
    int64_t sum{};
    for (int j{}; j < n; ++j) {
      sum += a[j] * ((i & (1 << j)) ? 1 : -1);
    }
    if ((sum % 360) == 0) {
      std::cout << "YES\n";
      return 0;
    }
  }

  std::cout << "NO\n";
  return 0;
}

void findPattern() {
  for (int i{}; i < 360; ++i) {
    for (int j{}; j < 360; ++j) {
      if (i + j > 360) {
        std::cout
        // << "i: " << i << '\n'
        // << "j: " << j << '\n'
        // << "k: " << -i -j << '\n'
        << "and: " << (i & j & (360 - i - j)) << '\n';
      }
    }
  }
}


bool isPowerOfTwo(uint64_t n) {
  uint64_t count{};
  while (n) {
    count += n & 1;
    n >>= 1;
  }
  return count == 1;
}


void solve() {
  int n;
  std::cin >> n;
  uint64_t a[15];

  uint64_t andall{(1ull << 32) - 1};

  uint64_t sum{};
  for(int i{}; i < n; ++i) {
    std::cin >> a[i];
    andall &= a[i];
    sum += a[i];
  }
  if (sum & 1) {
    std::cout << "NO\n";

    return;
  }


  if (sum % 360 == 0) {
    std::cout << "YES\n";

    return;
  }

  std::cout << (isPowerOfTwo(andall) || (andall == 0) ? "YES" : "NO") << '\n';
}
