/* copyright
   Source:
   https://cses.fi/problemset/task/1069
 */
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  char c;
  char last{'z'};
  int count{1};
  int max{-1};
  while (std::cin.get(c)) {
    if (c == last) {
      ++count;
    } else {
      count = 1;
    }

    last = c;

    if (count > max) {
      max = count;
    }
  }

  std::cout << max << '\n';
  return 0;
}
