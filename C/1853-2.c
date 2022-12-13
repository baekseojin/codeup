// 바텀업 방식
#include <stdio.h>

int n;

int f(int k) {  
	if(k == n) return k;
	return f(k+1)+k; // 
}

/*
	n=5
	f(1) -> f(2)+1
	f(2) -> f(3)+2
	f(3) -> f(4)+3
	f(4) -> f(5)+4
	f(5) -> return 5
	f(4) = f(5)+4 = 5+4 = 9
	f(3) = 12
	f(2) = 14
	f(1) = 15 
*/
int main() {
	scanf("%d", &n); // 5
	printf("%d", f(1)); 
	return 0;
} 