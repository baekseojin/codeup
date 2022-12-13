#include <stdio.h>

int i, n, DT[10000001] = {1,2};

int main() {
  scanf("%d", &n);
  for (i = 2; i <= n; i++) {
    DT[i] = (DT[i - 1] + i) % 137;
  }
  printf("%d", DT[n]);
  return 0;
}

/*
n == 4
DT[2] = 2 + 2 = 4
DT[3] = 4 + 3 = 7
DT[4] = 7 + 4 = 11
*/

/* 모범 풀이
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 10000001
#define MOD 137

int DT[MAX_SIZE] = {1,2,4};

int main() {
    int i,n;
    scanf("%d", &n);
    for(i=3; i<=n; i++) {
        DT[i] = (DT[i-1] + i) % MOD;
    }
    printf("%d", DT[n]);
    return 0;
}
*/