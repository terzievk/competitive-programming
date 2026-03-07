/* copyright
   Source:
   https://vjudge.net/problem/HackerRank-si-basic-check-bit

   problem is missing in hackerrank...
   can't submit this to be judged,
   but I guess it's good practice anyways
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n, i;
  std::cin >> n >> i;
  std::cout << ((n & (1 << i)) ? "true" : "false") << '\n';
  return 0;
}
