/* copyright
   Source:
   https://vjudge.net/problem/CodeForces-1203C
 */
#include <bits/stdc++.h>

int64_t count(int64_t n) {
  int64_t i{1};
  int64_t count{};
  for (; i * i < n; ++i) {
    if (n % i == 0) {
      count += 2;
    }
  }

  if (i * i == n) {
    ++count;
  }

  return count;
}

int64_t gcd(int64_t a, int64_t b) {
  while (b) {
    a %= b;
    std::swap(a, b);
  }

  return a;
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int64_t n;
  std::cin >> n;

  if (n == 1) {
    int64_t x;
    std::cin >> x;
    std::cout << count(x) << '\n';
    return 0;
  }

  int64_t a, b;
  std::cin >> a >> b;
  int64_t d{gcd(a, b)};
  for (int64_t i{}; i < n - 2; ++i) {
    int64_t x;
    std::cin >> x;
    d = gcd(d, x);
  }

  std::cout << count(d) << '\n';
  return 0;
}
