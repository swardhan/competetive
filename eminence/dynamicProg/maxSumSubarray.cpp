#include<bits/stdc++.h>
using namespace std;

int kadane(int* arr, int n){
  int best_sum = 0;
  int current_sum = 0;
  for(int i = 0;i < n; i++){
    current_sum += arr[i];
    if (best_sum < current_sum){
      best_sum = current_sum;
    }
    if(current_sum < 0){
      current_sum = 0;
    }
  }
  return best_sum;
}

int main(){6
  int n;
  cin >> n;
  int arr[n];
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }
  cout << kadane(arr, n) << endl;

  return 0;
}
