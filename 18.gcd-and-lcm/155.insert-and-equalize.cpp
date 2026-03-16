/* copyright
   Source:
   https://codeforces.com/problemset/problem/1902/C
 */
#include <bits/stdc++.h>

int64_t a[200*1000];

void solve() {
  int n;
  std::cin >> n;

  if (n == 1) {
    int x;
    std::cin >> x;

    std::cout << "1\n";
    return;
  }

  for (int i{}; i < n; ++i) {
    std::cin >> a[i];
  }

  std::sort(a, a + n, std::greater<int64_t>());

  int64_t max{a[0]};

  int64_t d{};

  for (int i{1}; i < n; ++i) {
    d = std::gcd(d, max - a[i]);
    if (d == 1) {
      break;
    }
  }

  // for (int i{}; i < n; ++i) {
  //   std::cout << a[i] << ' ';
  // }
  // std::cout << '\n';

  auto last{a[0]};
  for (int i{1}; i < n; ++i) {
    if (last - a[i] > d) {
      break;
    }
    last = a[i];
  }

  int64_t next{last - d};
  int64_t count{(max - next) / d};
  for (int i{1}; i < n; ++i) {
    count += (max - a[i]) / d;
  }
  // std::cout << last - d <<  std::endl;
  // std::cout << max << std::endl;
  // std::cout << d << std::endl;
  std::cout << count << '\n';
}


int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);


  int t;
  std::cin >> t;
  for (int i{}; i < t; ++i) {
    solve();
  }

  return 0;
}


/*
  7
  2 -3 4 1 10 3 8

  24
  4 -9 -6 11 6 -4 5 -2 -3 13 7 12 10 3 8 -8 9 0 -10 -5 -1 1 -7 2

  14
  -8 5 4 10 -2 -9 -10 -3 7 -6 1 -7 -1 -5

  16
  5 -2 7 8 -5 10 -1 4 -3 0 1 -6 6 -7 3 -10

  25
  -4 -5 -6 6 10 -8 -2 0 -1 7 2 8 14 12 5 4 3 11 -3 -7 1 9 13 -10 -9

  7
  -5 10 0 -4 -10 -3 -8

  22
  1 -5 4 -1 3 8 -9 6 -6 5 9 10 -10 -4 2 -8 -3 -2 7 11 0 -7

  1
  -6

  16
  9 -10 -7 4 -8 10 -5 -1 -9 8 3 -2 2 5 0 -6

  15
  -4 9 -10 4 -9 -2 -1 1 -7 5 7 6 2 0 3

  9
  -6 9 10 5 7 -10 -2 3 2

  3
  6 1 -8

  6
  -3 -6 -7 6 -10 -9

 */
