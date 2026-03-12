/* copyright
   Source:
   https://codeforces.com/problemset/problem/1294/C
 */
#include <bits/stdc++.h>

void solve(int n) {
  int a{2};
  while (n % a) {
    ++a;
    if (a * a > n) {
      std::cout << "NO\n";
      return;
    }
  }

  int b{a + 1};
  n /= a;
  while (n % b) {
    ++b;
    if (b * b >= n) {
      std::cout << "NO\n";
      return;
    }
  }

  if (n/b == b  || n/a == b || b == n) {
    std::cout << "NO\n";
    return;
  }

  std::cout << "YES\n";
  std::cout << a << ' ';
  std::cout << b << ' ';
  std::cout << n/b << '\n';

  return;
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int t;
  std::cin >> t;
  for (int i{}; i < t; ++i) {
    int n;
    std::cin >> n;
    solve(n);
  }
  return 0;
}
