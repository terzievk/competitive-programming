/* copyright
   Source:
   https://vjudge.net/problem/HackerRank-countingsort2
 */

#include <bits/stdc++.h>

#define MAGIC 100

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  std::cin >> n;

  int a[MAGIC] {};

  for (int i{}; i < n; ++i) {
    int x;
    std::cin >> x;
    ++a[x];
  }

  for (int i{}; i < MAGIC; ++i) {
    while (a[i]--) {
      std::cout << i << ' ';
    }
  }
  std::cout << '\n';
  return 0;
}
