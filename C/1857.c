// 3개 중에 2개 선택 : 3C2
// 1개를 미리 선택해버렸다? : 2C1

/*
점화식 : return f(n-1, r-1) + f(n-1, r)
만약에 첫번째거를 선택했다면
o o ㅁ : 뒷 두개중에 한 개 선택, 
o ㅁ o 
=> f(n-1, r-1)

첫번째거를 선택 안했다면
ㅁ o o : 무조건 뒤에 두개 다 선택,
=> f(n-1, r)

*/

// 탈출조건
// r = 1이면 n개가 선택, / 3C1 = 3 / 2C1 = 2 / 
// r = 0이면 1개가 선택, / 3C0 = 1 / 2C0 = 1 / 
// r>n이면 정답이 없다 

#include <stdio.h>

int nCr(int n, int r) {
    if(r>n) return 0;
    if(n==r || r==0) return 1;
    else return nCr(n-1, r-1) + nCr(n-1, r); 
}

int main() {
    int n, r;
    scanf("%d %d", &n, &r);
    printf("%d", nCr(n, r));
    return 0;
}