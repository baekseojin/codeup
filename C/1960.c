#include <stdio.h>

int memo[40] = {1,2,4};
int n;

int f(int n) {
    if(memo[n]) return memo[n];
    else return memo[n] = f(n - 1) + n;
}

int main() {
  scanf("%d", &n);
  printf("%d", f(n));
}

/*

n == 5
memo[5] = f(4) + 5 = 16
memo[4] = f(3) + 4 = 11
memo[3] = f(2) + 3 = 7
f(2) = 4
*/