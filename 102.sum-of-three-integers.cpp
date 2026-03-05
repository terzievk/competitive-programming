/* copyright
   Source:
   https://atcoder.jp/contests/abc051/tasks/abc051_b
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int k, s;
  std::cin >> k >> s;

  int count1{};
  for (int a{}; a <= k; ++a) {
    for (int b{a+1}; b <= k; ++b) {
      for (int c{b+1}; c <= k; ++c) {
        if (a + b + c == s) {
          ++count1;
          //          std::cout << a << ' ' << b << ' ' << c << '\n';
        }
      }
    }
  }

  int count2{};
  for (int a{}; a <= k; ++a) {
    for (int b{}; b <= k; ++b) {
      if (a == b) {
        continue;
      }
      if (a + b + b == s) {
        ++count2;
        //        std::cout << a << ' ' << b << '\n';
      }
    }
  }


  int count {6 * count1 + 3 * count2};

  if (s % 3 == 0) {
    ++count;
  }

  std::cout << count << '\n';
  return 0;
}
