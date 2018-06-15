#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,lef,rig,last,i;
    int a[100005];
    long long ans=0;
    cin >> n >> k;
    lef=1,rig=1,last=0;
    for(i=1;i<=n;i++) cin >> a[i];
    while(rig<=n)
    {
        long long p=1;
        for(i=lef;i<=n;i++)
        {
            p*=a[i];
            p%=(long long)k;
            if(p==0)break;
        }
        rig=i;
        p=1;
        for(i=rig;i>=1;i--)
        {
            p*=a[i];
            p%=(long long)k;
            if(p==0)break;
        }
        lef=i;
        ans+=(long long)(lef-last)*(long long)(n-rig+1);
        last=lef;
        lef++;
        rig++;
    }
    cout << ans;
    return 0;
}
