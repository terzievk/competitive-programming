/* copyright
   Source:
   https://vjudge.net/problem/HackerRank-2d-array
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int a[6][6];

  for (int i{}; i < 6; ++i) {
    for (int j{}; j < 6; ++j) {
      std::cin >> a[i][j];
    }
  }

  int max{-1000}; // something small
  for (int i{}; i < 4; ++i) {
    for (int j{}; j < 4; ++j) {
      int sum{
        a[i][j] + a[i][j+1] + a[i][j+2]
        +a[i+1][j+1]
        +a[i+2][j] + a[i+2][j+1] + a[i+2][j+2]};

      if (sum > max) {
        max = sum;
      }
    }
  }

  std::cout << max << '\n';

  return 0;
}
