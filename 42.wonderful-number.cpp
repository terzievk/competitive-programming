/* copyright
   Source:
   https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/C
*/
#include <bits/stdc++.h>

std::string toBinaryInversed(int);
bool isPalindrome(std::string);

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;

  std::cin >> n;

  if (n % 2 == 0) {
    std::cout << "NO\n";

    return 0;
  }

  std::cout << (isPalindrome(toBinaryInversed(n)) ? "YES" : "NO") << '\n';

  return 0;
}

std::string toBinaryInversed(int n) {
  // no need to inverse since checking for palindromes only
  std::string s{};
  while (n > 0) {
    s += (n % 2 ? "1" : "0");
    n /= 2;
  }
  return s;
}

bool isPalindrome(std::string s) {
  for (size_t i{0}; i < s.size()/2; ++i) {
    if (s[i] != s[s.size() - i - 1]) {
      return false;
    }
  }
  return true;
}
