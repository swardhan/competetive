#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int a[n];
  for(int i=0; i < n; i++){
    cin >> a[i];
  }

  sort(a, a+n);
  int temp[n], flag = 1;
  for(int i = n-1, j=0, k=n-1; i >= 0; i--){
    if(flag){
      temp[j] = a[i];
      j++;
      flag = 0;
    }else{
      temp[k] = a[i];
      k--;
      flag = 1;
    }
  }

  int key = min(temp[0], temp[n-1]);
  int sum = 0;
  for(int i = 1; i <= n-1; i++){
    sum += (key - temp[i]);
  }

  cout << sum << endl;
}
