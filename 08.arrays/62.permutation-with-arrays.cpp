/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/R
*/
#include <bits/stdc++.h>

void sort(int a[], int n) {
  for (int i{}; i < n - 1; ++i) {
    for (int j{}; j < n - i - 1; ++j) {
      if (a[j+1] < a[j]) {
        std::swap(a[j+1], a[j]);
      }
    }
  }
}

int main() {
  std::ios_base::sync_with_stdio(false);
  //  std::cin.tie(NULL);

  int n;
  std::cin >> n;

  int a[1000];
  int b[1000];

  for (int i{}; i < n; ++i) {
    std::cin >> a[i];
  }

  for (int i{}; i < n; ++i) {
    std::cin >> b[i];
  }

  sort(a, n);
  sort(b, n);

  for (int i{}; i < n; ++i) {
    if (a[i] != b[i]) {
      std::cout << "no\n";

      return 0;
    }
  }

  std::cout << "yes\n";
  return 0;
}
