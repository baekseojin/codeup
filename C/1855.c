#include <stdio.h>

int f(int k) {
  if(k<=2) return 1; // 2번째 피보나치 수열까지 1이기 때문에 k가 2보다 작으면 1 리턴 
  return f(k-2) + f(k-1);
}

int main() {
  int n; 
  scanf("%d", &n);
  printf("%d", f(n));
  return 0;
}

/*
  n = 5
  f(5)
  f(3) + f(4)

  f(3) -> f(1) + f(2)
  1 + 1 = 2 = f(3)
  
  f(4)
  f(2) + f(3)
  1 + f(1) + f(2)
  = 1 + 1 + 1 = f(4)
  f(3) + f(4) => 2 + 3 = 5
*/

// 피보나치 수열은 계산 속도가 떨어진다 -> 했던 계산을 또 하기 때문에
// -> 해결방법 2가지
// 1. memoization(메모이제이션) - 재귀함수 사용
// 2. Dynamic programming(다이나믹 프로그래밍) - 반복문 사용
// 배열 : 한 번 계산한 것을 배열에 저장해서 나중에 다시 쓰기 위해 메모하는 것 