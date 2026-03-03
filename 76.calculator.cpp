/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/O
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int a;
  char c;
  int b;
  std::cin >> a >> c >> b;

  switch(c) {
    case '+':
      std::cout << a + b << '\n';
      break;
    case '-':
      std::cout << a - b << '\n';
      break;
    case '*':
      std::cout << a * b << '\n';
      break;
    case '/':
      std::cout << a / b << '\n';
      break;
  };

  return 0;
}
