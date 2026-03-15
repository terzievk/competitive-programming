/* copyright
   Source:
   https://codeforces.com/problemset/problem/1732/A
 */
#include <bits/stdc++.h>

// hacky af yet this bitch pretty af with one case for n... gcd math babyyyyyyyy
void solve() {
  int n;
  std::cin >> n;

  int x{};

  for (int i{}; i < n - 2; ++i) {
    int y;
    std::cin >> y;

    x = std::gcd(x, y);
  }

  int a{};
  int b{};
  std::cin >> a;

  if (n > 1) {
    std::cin >> b;
  }

  if (std::gcd(x, std::gcd(a, b)) == 1) {
    std::cout << "0\n";
    return;
  } else if (std::gcd(x, std::gcd(a, std::gcd(b, n))) == 1) {
    std::cout << "1\n";
    return;
  } else if (std::gcd(x, std::gcd(std::gcd(a, n - 1), b)) == 1) {
    std::cout << "2\n";
    return;
  } else {
    std::cout << "3\n";
  }
}

int main() {
  std::ios_base::sync_with_stdio(false);
  //   std::cin.tie(NULL);

  int t;
  std::cin >> t;

  for (int i{}; i < t; ++i) {
    solve();
  }

  return 0;
}
