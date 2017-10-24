#include<iostream>

using namespace std;

// int sum(int num, int total=0){
//   if(num<0){
//     return total;
//   }
//   sum(num-1, total+num);
// }

int factorial(int num, int result=1){
  if(num==0){
    return result;
  }
  result = num*result;
  factorial(num-1, result);
}

int main(){
  // int x = factorial(12);
  // cout<<x<<endl;
  int n;
  cin >> n;
  int a[n];
  for(int i=0; i<n; i++){
    cin >> a[i];
  }

  for(int i=n-1; i>=0; i--){
    cout << a[i] << " ";
  }

  cout << endl;
  return 0;
}
