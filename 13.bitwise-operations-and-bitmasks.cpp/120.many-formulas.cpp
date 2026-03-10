/* copyright
   Source:
   https://vjudge.net/problem/AtCoder-arc061_a
 */
#include <bits/stdc++.h>

// obviously there is a pattern, but let's see if this will pass
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  uint64_t s[10];
  char c;
  int count{};
  while (std::cin.get(c)) {
    if (c == '\n') {
      break;
    }

    s[count++] = static_cast<uint64_t>(c - '0');
  }

  uint64_t sum{};
  for (uint i{}; i < (1u << (count - 1)); ++i) {
    uint64_t helper{};
    for (int j{}; j < count - 1; ++j) {
      // std::cout << "i: " << i << std::endl;
      // std::cout << "j: " << j << std::endl;
      // std::cout << (i & (1 << j)) << std::endl;
      if (i & (1u << j)) {
        // std::cout << "helper: " << helper << std::endl;
        // std::cout << "s[j]: " << s[j] << std::endl;
        sum += helper;
        sum += s[j];
        helper = 0;
      } else {
        helper += s[j];
        helper *= 10;
      }
    }

    // std::cout << "helper: " << helper * 10 << std::endl;
    sum += helper;
    // std::cout << "s[count - 1]: " << s[count - 1] << std::endl;
    sum += s[count - 1];
  }

  std::cout << sum << std::endl;
  return 0;
}
