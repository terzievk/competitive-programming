/* copyright
   Source:
   https://vjudge.net/problem/Aizu-ITP1_3_D
 */
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);


  int a, b, c;
  std::cin >> a >> b >> c;

  int count{};
  for (int i{a}; i <= b; ++i) {
    if ((c % i) == 0) {
      ++count;
    }
  }

  std::cout << count << '\n';
  return 0;
}
