/* copyright
   Source:
   https://eolymp.com/en/problems/12228
*/
#include <bits/stdc++.h>

void findPattern();

uint64_t countBits(uint64_t n) {
  uint64_t count{};
  while (n) {
    count += n & 1;
    n >>= 1;
  }
  return count;
}

bool isPowerOfTwo(uint64_t n) {
  return countBits(n) == 1;
}

uint64_t ceilPowerOfTwo(uint64_t n) {
  uint64_t count{};
  while (n) {
    n /= 2;
    ++count;
  }
  return count;
}

void solve() {
  int t;
  std::cin >> t;

  for (int i{}; i < t; ++i) {
    uint64_t m{1000*1000*1000 + 7};
    uint64_t n;
    std::cin >> n;

    if (n == 2) {
      std::cout << 1 << '\n';
    } else if (isPowerOfTwo(n)) {
      std::cout << (2 * n - 2) % m << '\n';
    } else {
      uint64_t x{ceilPowerOfTwo(n)};
      std::cout << ((1ull << x) - 1) % m << '\n';
    }
  }
}

int main() {
  std::ios_base::sync_with_stdio(false);
  //  std::cin.tie(NULL);
  //  findPattern();

  solve();

  return 0;
}

void findPattern() {
  uint64_t n{};
  while (std::cin >> n) {
    std::cout
        << "n: " << n << '\n'
        << std::bitset<8>(n) << '\n'
        << "n: " << n << '\n';

    std::vector<uint64_t> v;
    for (uint64_t i{1}; i <= n; ++i) {
      for (uint64_t j{i + 1}; j <= n; ++j) {
        v.push_back(i ^ j);
      }
    }

    std::sort(v.begin(), v.end());

    auto it{unique(v.begin(), v.end())};

    v.erase(it, v.end());


    std::cout << "count: " << v.size() << '\n';

    for (auto element : v) {
      std::cout << std::bitset<8>(element) << '\n';
    }

  }
}
