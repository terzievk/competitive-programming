/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/C
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  std::string a, b;
  std::cin >> a >> b;

  // make sure a is not longer
  if (a.size() > b.size()) {
    std::swap(a, b);
  }

  // pad the shorter word with spaces, see the definition:
  // https://en.wikipedia.org/wiki/Lexicographical_order
  std::string temp{a};
  for (size_t i{}; i < b.size() - a.size(); ++i) {
    temp.append(" ");
  }

  // ' ' is before letters in ascii as well
  for (size_t i{}; i < a.size(); ++i) {
    if (temp[i] < b[i]) {
      std::cout << a << '\n';

      return 0;
    } else if (temp[i] > b[i]) {
      std::cout << b << '\n';

      return 0;
    }
  }

  // if equal, print any
  std::cout << a << '\n';

  return 0;
}
