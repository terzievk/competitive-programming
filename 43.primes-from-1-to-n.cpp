/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/J
*/
#include <bits/stdc++.h>

bool isPrime(int);

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  std::cin >> n;

  for (int i{2}; i <= n; ++i) {
    if (isPrime(i)) {
      std::cout << i << ' ';
    }
  }

  std::cout << '\n';

  return 0;
}

bool isPrime(int n) {
  for (int i{2}; i <= sqrt(n); ++i) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}
