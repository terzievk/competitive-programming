/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/U
 */
#include <bits/stdc++.h>

int w[20];
int v[20];


int64_t knap(int64_t n, int64_t cap, int i) {
  if (n <= 0) {
    return 0;
  }

  if (cap <= 0) {
    return 0;
  }

  if (w[i] <= cap) {
    return std::max(v[i] + knap(n - 1, cap - w[i], i + 1),
                    knap(n - 1, cap, i + 1));
  } else {
    return knap(n - 1, cap, i + 1);
  }
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int64_t n, cap;
  std::cin >> n >> cap;

  for (int i{}; i < n; ++i) {
    std::cin >> w[i] >> v[i];
  }

  std::cout << knap(n, cap, 0) << '\n';

  return 0;
}
