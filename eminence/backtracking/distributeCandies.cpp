#include<bits/stdc++.h>

using namespace std;

bool check(long long k, long long a[], long long n, long long d){
  int sum = 0;
  for(int i = 0; i < n; i++){
    sum += (a[i]/d);
    if(sum >= k){
      return true;
    }
  }
  return false;
}

int main(){
  long t;
  cin >> t;
  while(t--){
    long long n, k, sum = 0;
    cin >> n >> k;
    long long a[n];
    for(long long i = 0; i < n; i++){
      cin >> a[i];
      sum += a[i];
    }

    if(k > sum){
      cout << 0 << endl;
      return 0;
    }

    sort(a, a+n);

    long long start = 0;
    long long end = a[n-1];
    long long ans = -1;

    while(start <= end){
      long long mid = start + (end - start)/2;
      if(check(k, a, n, mid)){
        ans = mid;
        start = mid+1;
      }else{
        end = mid-1;
      }
    }
    cout << ans << endl;
  }
}
