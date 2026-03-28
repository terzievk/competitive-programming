/* copyright
   Source:
   https://vjudge.net/problem/DMOJ-sort1
 */
#include <bits/stdc++.h>

int a[20];
int n;

void print() {
  for (int i{}; i < n; ++i) {
    std::cout << a[i] << ' ';
  }
  std::cout << '\n';
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);


  std::cin >> n;

  for (int i{}; i < n; ++i) {
    std::cin >> a[i];
  }

  print();

  for (int i{}; i < n - 1; ++i) {
    bool swap{};
    for (int j{}; j + i < n - 1; ++j) {
      if (a[j] > a[j + 1]) {
        std::swap(a[j], a[j + 1]);
        swap = true;
        print();
      }
    }
    if (!swap) {
      return 0;
    }
  }

  return 0;
}
