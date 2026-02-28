/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Q
*/
#include <bits/stdc++.h>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  double x;
  double y;
  std::cin >> x >> y;

  // lets see if = 0 will work with doubles
  if (x == 0 && y == 0) {
    std::cout << "Origem\n";
  } else if (y == 0) {
    std::cout << "Eixo X\n";
  } else if (x == 0) {
    std::cout << "Eixo Y\n";
  } else if (x > 0 && y > 0) {
    std::cout << "Q1\n";
  } else if (x < 0 && y > 0) {
    std::cout << "Q2\n";
  } else if (x < 0 && y < 0) {
    std::cout << "Q3\n";
  } else if (x > 0 && y < 0) {
    std::cout << "Q4\n";
  } else {
    return 1;
  }


  return 0;
}
