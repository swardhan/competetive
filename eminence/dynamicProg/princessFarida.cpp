#include <bits/stdc++.h>
using namespace std;
#define LL long long
LL max(LL a,LL b)
{
     return a>b?a:b;
}
int main() {

     int t,n;
     scanf("%d",&t);
     for(int l=1;l<=t;++l)
     {
          scanf("%d",&n);
          LL dp[n+1]={0};
          int k;
          for(int i=1;i<=n;++i)
          {
               scanf("%d",&k);
               dp[i]=max((i>1?dp[i-1]:0),(i>2?dp[i-2]:0)+k);
          }
          printf("Case %d: %lld\n",l,dp[n]);
     }
     return 0;
}
