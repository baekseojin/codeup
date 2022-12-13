#include <stdio.h>

int n;
void f(int k) { // 값에 의한 호출  
	if(k==n) return ; // 함수를 호출한 곳으로 되돌아감 
	f(k+1); 
	printf("*");
} // 함수가 끝나면 호출한 곳으로 되돌아감 

int main() {
	scanf("%d", &n); 
	f(0); 
	printf("\n");
	return 0;
}

/*
f(0) 
    if X
    f(1) 
        if()

*/