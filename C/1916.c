// 장점 : 반복계산이 없다. 
// 시험 문제 출제 ***********
#include <stdio.h>

int n;
int memo[201] = {0,1,1,2,3};

long long int f(int k) {
  if(memo[k]) return memo[k]; // memo[k]에 값이 있으면 memo[k]를 반환한다. 
  return memo[k] = ( f(k-1) + f(k-2) ) % 10009;
}

int main() {
  scanf("%d", &n);
  printf("%lld", f(n)); 
  return 0;
}

/*
  memo[8] = f(7) + f(6) % 10009, f(8) = 21 
  memo[7] = f(7) = f(6) + f(5) % 10009, f(7) = 13
  memo[6] = f(6) = f(5) + f(4) % 10009, f(6) = 8 
  memo[5] = f(5) = f(4) + f(3) % 10009, f(5) = 5 
  f(4) = return 3
  f(3) = return 2
*/

/* 코드 분석(n = 7)
  memo -> [0|1|1|2|3| | | |]
  f(7) -> 
  f(6) ->
  f(5) -> 
  f(4) = return 3
  + f(3) = return 2
  3 + 2 % 10009 = 5
  memo[5] = 5 // memo[5]의 값을 f(5)에 준다
  
  f(5) = 5 
  + f(4) = 3
  memo[6] = f(5) + f(4) % 10009 = 8
  memo[6]의 값을 f(7)에 준다
  f(6) + f(5) + 13 = memo[7] 

인덱스 번호 : 0 1 2 3 4 5 6 7   
    memo -> [0|1|1|2|3|5|8|13]
*/
