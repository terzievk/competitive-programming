/* copyright
   Source:
   https://codeforces.com/contest/1646/problem/C

fucking proud with this one

solution:
all the powerful numbers up to 10^12 are
52 - 40 powers of 2
and 12 factorials (below) (excluding 1 and 2)
2^52 is too much to handle even with bit masks...

so I just bitmask the factorials
and count how many 1s does (n - bitmask) has,
and since each power of the is one 1, I add the
number of 1s left to the count of the factorials
in the bit mask and voila
 */
#include <bits/stdc++.h>

uint64_t p[12]
  {6, 24, 120, 720, 5040, 40320, 362880, 3628800,
   39916800, 479001600, 6227020800, 87178291200};

void printAll();

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  //  printAll();
  int t;
  std::cin >> t;

  for (int i{}; i < t; ++i) {
    uint64_t n;
    std::cin >> n;

    int min{1234567890};  // something big
    for (uint64_t i{}; i < (1ull << 12); ++i) {
      uint64_t sum{};
      int k{};  // count the number of powerful numbers
      // classic bitmask flow
      for (int j{}; j < 12; ++j) {
        if (i & (1ull << j)) {
          ++k;
          sum += p[j];
        }
      }

      if (sum > n) {  // not really interested
      } else if (sum == n && k < min) {
        min = k;  // if an exact match, check if min
      } else if (sum < n) {
        // if not an exact match count how many 1s does
        // the "solution" need to be added to the sum k
        // and check
        uint64_t temp{n - sum};
        // just count the number of 1s left and add them to k - see at top
        while(temp) {
          if (temp & 1) {
            ++k;
          }
          temp >>= 1;
        }
        if (k < min) {
          min = k;
        }
      }
    }
    std::cout << min << '\n';
  }

  return 0;
}

void printAll() {
  int64_t max{1000ull*1000*1000*1000};
  int64_t two{1};
  int count{};
  while (two < max) {
    ++count;
    std::cout << two << ", ";
    two *= 2;
  }

  int64_t fact{1};
  int cur{2};
  while (fact < max) {
    ++count;
    std::cout << fact << ", ";
    fact *= cur++;
  }

  std::cout << count << std::endl;
}
