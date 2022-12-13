#include <stdio.h>
#include <string.h>

char str[30];

int f(int k) {
    if(k==-1) return 0;
    return f(k-1) + (str[k]-'0')
}

int main() {
    int n;
    scanf("%s", str);
    n = strlen(str);
    f(n);
    return 0;
}