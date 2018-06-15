#include<bits/stdc++.h>
typedef long long ll;
#define mod 1000000007

using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    ll n;
    cin >> n;
    ll a[n];
    for(ll i = 0; i < n; i++){
      cin >> a[i];
    }
    ll max = *max_element(a, a+n);
    ll arr[max+1];
    memset(arr, 0, sizeof(arr));
    for(ll i = 0; i < n; i++){
      arr[a[i]] = 1;
    }
    for(ll i = 0; i <= max; i++){
      if(arr[i] > 0){
        for(ll j=i+i; j <= max; j+=i){
          if(arr[j] > 0){
            arr[j] = (arr[i]%mod + arr[j]%mod)%mod;
          }
        }
      }
    }
    // for(ll i = 0; i <= max; i++){
    //   cout << arr[i] << "  ";
    // }
    ll sum = 0;
    for(ll i = 0; i < n; i++){
      sum = (sum%mod + arr[a[i]]%mod)%mod;
    }
    cout << sum <<  endl;
  }
}
