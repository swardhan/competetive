#include<bits/stdc++.h>

using namespace std;
long long nFactor[11][1000001];

int main(){
  // Make prime Sieve
  long long primes[1000000];
  for(long long i = 0; i <= 1000000; i++){
    primes[i] = 0;
  }
  for(long long i=2; i <= 1000000/2; i++){
    if(primes[i] == 0){
      for(long long j = i; j <= 1000000; j+= i){
        primes[j]++;;
      }
    }
  }

  memset(nFactor, 0, sizeof(nFactor));

  for(int i = 0; i <= 10; i++){
    for(long long j = 1; j <= 1000000; j++){
      if(primes[j] == i){
        nFactor[i][j] = nFactor[i][j-1]+1;
      }else{
        nFactor[i][j] = nFactor[i][j-1];
      }
    }
  }

  long long t;
  cin >> t;
  while(t--){
    long long a, b; int n;
    cin >> a >> b >> n;
    cout << nFactor[n][b]-nFactor[n][a-1] << endl;
  }
}
