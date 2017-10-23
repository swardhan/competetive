#include<iostream>
#include<string>

using namespace std;

typedef long long ll;

ll gcd(ll a, ll b){
  // base case
  if(b == 0){
    return a;
  }
  // Step for euclid algo
  return gcd(b, a%b);
}

int main(){
  int t;
  cin >> t;
  while(t--){
    string b;
    ll a;
    cin >> a;
    cin >> b;
    if(a == 0){
      return 0;
    }
    ll num = 0;
    for(int i=0; i<b.length(); i++){
      num = (num*10 + b[i] - '0') % a;
    }
    cout << gcd(a,num) << endl;
  }
}
