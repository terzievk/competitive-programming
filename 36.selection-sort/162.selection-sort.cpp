/* copyright
   Source:
   https://vjudge.net/problem/Aizu-ALDS1_2_B
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

  int count{};
  for (int i{}; i < n - 1; ++i) {
    int minIndex{i};
    for (int j{i + 1}; j < n; ++j) {
      if (a[j] < a[minIndex]) {
        minIndex = j;
      }
    }

    if (minIndex > i) {
      std::swap(a[i], a[minIndex]);
      ++count;
    }
  }


  print();
  std::cout << count << '\n';
  return 0;
}
