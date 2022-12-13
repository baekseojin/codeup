#include<stdio.h>

int DT[10001][10001];

int main()
{
    long long int n,k;
    scanf("%lld %lld",&n,&k);
    for(long long int i=1; i<=n; i++){
        for(long long int j=1; j<=k && j<=i; j++){
            if(i==j) DT[i][j]=1;
            else if(j==1) DT[i][j]=i;
            else DT[i][j]=(DT[i-1][j-1] + DT[i-1][j])%10000007;
        }
    }
    printf("%lld",DT[n][k]);
    return 0;
}