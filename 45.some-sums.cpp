/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/U
*/
#include <bits/stdc++.h>

// sums of digits
int sod(int x) {
  int sum{};
  while (x > 0) {
    sum += x % 10;
    x /= 10;
  }

  return sum;
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  int a;
  int b;

  std::cin >> n >> a >> b;

  int sum{};
  for (int i{1}; i <= n; ++i) {
    int x{sod(i)};
    if (x >= a && x <= b) {
      sum += i;
    }
  }

  std::cout << sum << '\n';

  return 0;
}
