/* copyright
   Source:
   https://vjudge.net/problem/CodeForces-102B
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int count{};
  char c;
  int sum{};
  while (std::cin >> c) {
    ++count;
    sum += c - '0';
  }

  if (count == 1) {
    std::cout << "0\n";

    return 0;
  }

  count = 1;

  while (sum >= 10) {
    ++count;
    int newSum{};
    while (sum > 0) {
      newSum += sum % 10;
      sum /= 10;
    }

    sum = newSum;
  }

  std::cout << count << '\n';
  return 0;
}
