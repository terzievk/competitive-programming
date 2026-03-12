/* copyright
   Source:
   https://atcoder.jp/contests/abc247/tasks/abc247_c
 */
#include <bits/stdc++.h>

void print(int n) {
  if (n == 1) {
    std::cout << "1 ";

    return;
  }

  print(n - 1);
  std::cout << n << ' ';
  print(n - 1);

  return;
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  std::cin >> n;

  print(n);
  return 0;
}
