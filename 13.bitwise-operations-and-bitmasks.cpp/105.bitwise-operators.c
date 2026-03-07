/* copyright
   Source:
   https://vjudge.net/problem/HackerRank-bitwise-operators-in-c
*/
#include "stdio.h"

int main() {
  int n = 0;
  int k = 0;
  scanf ("%d", &n);
  scanf ("%d", &k);

  int a = 0;
  int o = 0;
  int x = 0;
  for (int i = 1; i <= n; ++i) {
    for (int j = i + 1; j <= n; ++j) {
      int temp = i & j;
      if (temp > a && temp < k) {
        a = temp;
      }

      temp = i | j;
      if (temp > o && temp < k) {
        o = temp;
      }

      temp = i ^ j;
      if (temp > x && temp < k) {
        x = temp;
      }
    }
  }

  printf ("%d\n", a);
  printf ("%d\n", o);
  printf ("%d\n", x);

  return 0;

}
