#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
  ll t, k = 1;
  cin >> t;
  while(t--){
    ll n;
    cin >> n;
    ll dp[n+1] = {0}, arr[n+1];
    for(ll i = 1; i <= n; i++){
      cin >> arr[i];
    }

    dp[1] = arr[1];
    dp[2] = max(arr[1], arr[2]);
    for(ll i = 3; i <= n; i++){
      dp[i] = max(dp[i-2]+arr[i], dp[i-1]);
    }
    cout << "Case " << k << ": " << dp[n] << endl;
    k++;
  }

}
