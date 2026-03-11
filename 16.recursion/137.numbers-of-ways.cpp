/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/Y
 */
#include <bits/stdc++.h>

int solve(int from, int to) {
  if (to == from) {
    return 1;
  }
  if (to - from == 1) {
    return 1;
    // ->
  }
  if (to - from == 2) {
    return 2;
    // ->->
    // --->
  }
  if (to - from == 3) {
    return 4;
    // ->->->
    // --->->
    // ->--->
    // ----->
  }

  return solve(from + 1, to) + solve(from + 2, to) + solve(from + 3, to);
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int f, t;
  std::cin >> f >> t;

  std::cout <<  solve(f, t) << '\n';

  return 0;
}
