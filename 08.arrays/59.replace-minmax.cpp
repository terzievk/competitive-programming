/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  std::cin >> n;

  int a[1000];
  for(int i{};i < n; ++i) {
    std::cin >> a[i];
  }

  int min{1000*1000};
  int minIndex{-1};
  int max{-min};
  int maxIndex{-1};
  for(int i{};i < n; ++i) {
    if (a[i] < min) {
      min = a[i];
      minIndex = i;
    }
    if (a[i] > max) {
      max = a[i];
      maxIndex = i;
    }
  }

  std::swap(a[minIndex], a[maxIndex]);

  for(int i{};i < n; ++i) {
    std::cout << a[i] << ' ';
  }
  std::cout << '\n';

  return 0;
}
