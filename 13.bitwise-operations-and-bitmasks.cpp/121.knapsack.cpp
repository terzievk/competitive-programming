/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/U
 */
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n, c;
  std::cin >> n >> c;
  int ws[20];
  int vs[20];
  for (int i{}; i < n; ++i) {
    std::cin >> ws[i] >> vs[i];
  }

  int max{};
  for (int i{}; i < (1 << n); ++i) {
    int sum{};
    int weight{};
    for (int j{}; j < n; ++j) {
      if (i & (1 << j)) {
        weight += ws[j];
        sum += vs[j];
      }
    }
    if (weight <= c && sum > max) {
      max = sum;
    }
  }

  std::cout << max << '\n';
  return 0;
}
