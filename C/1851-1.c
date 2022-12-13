// 하향식 
#include <stdio.h>

int n;
void f(int k) { // 값에 의한 호출  
	if(k<=0) return ; // 함수를 호출한 곳으로 되돌아감 
	f(k-1); // f(2) 호출, f(1)호출, f(0) 호출  
	printf("*");
} // 함수가 끝나면 호출한 곳으로 되돌아감 

int main() {
	scanf("%d", &n); // n = 3 
	f(n); // f(3) 호출 
	printf("\n"); 
	return 0;
}

/* 
n = 3
f(3)
f(2)
f(1)
f(0) return ; -> f(1) printf(*) -> f(2) printf(*) -> f(3) printf(*) 
출력값 : ***
*/ 