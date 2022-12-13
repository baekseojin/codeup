// 바텀업 방식
#include <stdio.h>

int n;

int f(int k) {
    if(k>n) return ; 
    printf("%d ", k); // 1, 2, 3, 4, 5
    f(k+1);
}

int main() {
    scanf("%d", &n); // 5
    f(1);
    return 0;
}