// 탑다운 방식
#include <stdio.h>

void f(int n) {
    if(n<=0) return ; 
    f(n-1);
    printf("%d", n);
}
int main() {
    int n;
    scanf("%d", &n);
    f(n); // 5
    return 0;
}

/*
f(5) 4 3 2 1 
*/