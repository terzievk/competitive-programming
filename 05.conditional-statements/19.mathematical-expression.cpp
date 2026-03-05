/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int a;
  char op;
  int b;
  char eq;
  int c;

  std::cin >> a >> op >> b >> eq >> c;

  if (op == '+') {
    if (a + b == c) {
      std::cout << "Yes";
    } else {
      std::cout << a + b;
    }
    std::cout << '\n';
  }
  if (op == '-') {
    if (a - b == c) {
      std::cout << "Yes";
    } else {
      std::cout << a - b;
    }
    std::cout << '\n';

  }
  if (op == '*') {
    if (a * b == c) {
      std::cout << "Yes";
    } else {
      std::cout << a * b;
    }
    std::cout << '\n';
  }


  return 0;
}
