/*
n\r|  0  1  2  3  4  5
0  |  0  0  0  0  0  0
1  |  1  1  X  X  X  X
2  |  1  2  1  X  X  X
3  |  1  3  3  1  X  X
4  |  1  4  6  4  1  X 
5  |  1  5  10 10 5  1


*/

#include <stdio.h>

int f(int n, int r) {
    if(r==n) return 1;
    else if(r==1) return n;
    else return f(n-1, r-1) + f(n-1, r);
}

int main() {
    int n, r;
    scanf("%d %d", &n, &r);
    printf("%d\n", f(n,r));
    return 0;
}