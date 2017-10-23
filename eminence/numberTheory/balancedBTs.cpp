#include<bits/stdc++.h>

using namespace std;

int balancedBTs(int h){
  if(h<=1){
    return 1;
  }

  int mod = pow(10,9)+7;
  int x = balancedBTs(h-1);
  int y = balancedBTs(h-2);

  int firstValue = (int)(((long long)x*x)%mod);
  int secondValue = (int)((long long)(x)*y*2%mod);

  int ans = (int)(((long long)(secondValue) + firstValue)%mod);

  return ans;
}

int main(){
  int n;
  cin >> n;
  cout << balancedBTs(n) << endl;
}
