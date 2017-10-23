#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

class Triplet{
  public:
    ll gcd;
    ll x;
    ll y;
};

Triplet gcdExtendedEuclid(ll a, ll b){

  if(b==0){
    Triplet myAns;
    myAns.x = 1;
    myAns.y = 0;
    myAns.gcd = a;
    return myAns;
  }

  Triplet smallAns = gcdExtendedEuclid(b, a%b);
  Triplet myAns;
  myAns.x = smallAns.y;
  myAns.y = smallAns.x - ((a/b)*smallAns.y);
  myAns.gcd = smallAns.gcd;
  return myAns;
}

int gcd(int a, int b){
  // Special case for a < b
  if(a < b){
    return gcd(b,a);
  }
  // base case
  if(b == 0){
    return a;
  }
  // Step for euclid algo
  return gcd(b, a%b);
}

ll modInverse(ll a, ll m){
  Triplet ans = gcdExtendedEuclid(a,m);
  ll x = ans.x;
  return (x%m + m)%m;
}


int main(){
  int t;
  cin >> t;
  while(t--){
    ll a, b, d;
    cin >> a >> b >> d;
    ll g = __gcd(a,b);
    // Special Cases
    if(d%g){
      cout << 0 << endl;
      continue;
    }

    if(d == 0){
      cout << 1 << endl;
      continue;
    }

    a/=g;
    b/=g;
    d/=g;

    ll y1 = (((d%a) * modInverse(b,a))%a);
    ll firstValue = d/b;

    if(d<y1*b){
      cout << 0 << endl;
      continue;
    }

    ll n = (firstValue - y1)/a;

    ll ans = n+1;

    cout << ans << endl;

  }
}
