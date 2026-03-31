/* copyright
   Source:
   https://vjudge.net/problem/Aizu-ALDS1_1_A
 */
#include <bits/stdc++.h>

int a[100];
int n;

void print() {
  for (int i{}; i < n - 1; ++i) {
    std::cout << a[i] << ' ';
  }

  std::cout << a[n - 1] << '\n';
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  std::cin >> n;


  for (int i{}; i < n; ++i) {
    std::cin >> a[i];
  }

  print();

  for (int i{1}; i < n; ++i) {
    int j{i};

    while (j > 0 && a[j - 1] > a[j]) {
      std::swap(a[j - 1], a[j]);
      --j;
    }
    print();
  }


  return 0;
}
