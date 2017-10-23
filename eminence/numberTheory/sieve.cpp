#include<bits/stdc++.h>

using namespace std;

int makeSieve(int n){
  bool isPrime[n+1];
  int count = 0;
  for(int i=0; i<=n; i++){
    isPrime[i] = true;
  }
  isPrime[0] = false;
  isPrime[1] = false;
  for(int i = 2; i*i <= n; i++){
    if(isPrime[i] == true){
      for(int j=i*i; j<=n; j+=i){
        isPrime[j] = false;
      }
    }
  }
  for(int i = 0; i <= n; i++){
    if(isPrime[i]){
      count++;
    }
  }
  return count;

}

int main(){
  int n;
  cin >> n;
  // makeSieve(n);
  int count = makeSieve(n);
  cout << count << endl;
}
