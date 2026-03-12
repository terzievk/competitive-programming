/* copyright
   Source:
   https://vjudge.net/problem/CodeForces-762A
 */
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int64_t n;
  size_t k;
  std::cin >> n >> k;

  std::vector<int64_t> v{};
  for (int64_t i{1}; i * i <= n; ++i) {
    if (n % i == 0) {
      v.push_back(i);
      if (i * i < n) {
        v.push_back(n/i);
      }

    }
  }

  std::sort(v.begin(), v.end());

  if (k <= v.size()) {
    std::cout << v[k - 1] << '\n';
  } else {
    std::cout << "-1\n";
  }

  return 0;
}
