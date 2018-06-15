#include<bits/stdc++.h>
#define MAX 1000000
#define pb push_back
typedef long long ll;
using namespace std;

int main(){
  ll sieve[MAX];
  for(ll i = 0; i <= MAX; i++){
    sieve[i] = i;
  }
  for(ll i = 2; i <=MAX/2; i++){
    for(ll j = i+i; j <= MAX; j+=i){
      if(sieve[j] == j){
        sieve[j] = i;
      }
    }
  }

  ll n;
  cin >> n;
  bool marked[n+1];
  memset(marked, 0, sizeof(marked));
  vector<ll> result;
  for(ll i = n; i > 0; i--){
    if(marked[i]){
      continue;
    }
    ll x = i;
    ll lpd = sieve[i];
    vector<ll> temp;
    while(x!=1){
      for(ll j = i; j > 0; j -= lpd){
        if(marked[j]==0){
          marked[j] = 1;
          temp.pb(j);
        }
      }
      while(x%lpd == 0){
        x/=lpd;
      }
      lpd = x;
    }
    sort(temp.begin(), temp.end(), greater<int>());
    for(ll k = 0; k < temp.size(); k++){
      cout << temp[k] << " ";
    }
    temp.clear();
  }
  cout << 1;

}
