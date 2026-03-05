/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/H
*/
#include <bits/stdc++.h>

// bubble sort
void sort(int a[], int n) {
  // save the last iteration
  for (int i{}; i < n - 1; ++i) {
    for (int j{}; j < n - i - 1; ++j) {
      if (a[j] > a[j + 1]) {
        std::swap(a[j], a[j + 1]);
      }
    }
  }
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  std::cin >> n;

  int a[1000];
  for (int i{}; i < n; ++i) {
    std::cin >> a[i];
  }

  sort(a, n);

  for (int i{}; i < n; ++i) {
    std::cout << a[i] << ' ';
  }
  std::cout << '\n';

  return 0;
}
