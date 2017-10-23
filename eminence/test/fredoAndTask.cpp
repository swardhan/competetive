#include<bits/stdc++.h>

using namespace std;

int main(){
  long long n;
  cin >> n;
  long long a[n];
  for(int i=0; i<n; i++){
    cin >> a[i];
  }

  sort(a, a+n);

  long double val = 0;
  for(int i=0; i<n; i++){
    val += (long double)log((long double)(a[i]));
  }

  long long left = a[0], right = a[n-1]+1;

  long long ans = -1;

  while(left <= right){
    long long mid = (right + left)/2;
    long double temp = (long double)n * (long double)(log((long double)(mid)));
    if(val < temp){
      ans = mid;
      right = mid-1;
    }else{
      left = mid+1;
    }
  }

  cout << ans << endl;
}
