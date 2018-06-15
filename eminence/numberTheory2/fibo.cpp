#include<iostream>
using namespace std;
#define MOD 1000000007
typedef long long ll;

void multiply(int a[2][2], int m[2][2]){

  int firstValue = a[0][0]* m[0][0] + a[0][1] * m[1][0];
  int secondValue = a[0][0]* m[0][1] + a[0][1] * m[1][1];
  int thirdValue = a[1][0]* m[0][0] + a[1][1] * m[1][0];
  int fourthValue = a[1][0]* m[0][1] + a[1][1] * m[1][1];

  a[0][0] = firstValue;
  a[0][1] = secondValue;
  a[1][0] = thirdValue;
  a[1][1] = fourthValue;

}

void power(int a[][2], int n){
  if(n == 1){
    return;
  }
  power(a, n/2);
  multiply(a,a);
  if(n%2 != 0){
    int f[2][2] = {{1,1},{1,0}};
    multiply(a,f);
  }
}

int fib(int n){
  if(n == 0 || n == 1){
    return n;
  }
  int a[2][2] = {{1,1},{1,0}};
  power(a, n-1);
  return a[0][0];
}

// unsigned long long fiboSum(unsigned long long m,unsigned long long n)
// {
// 	unsigned long long sum = 0;
//   for(int i = n; i<=m; i++){
//     sum =((sum + fib(i)%MOD)%MOD);
//   }
//   return sum;
// }

int main(){
  unsigned long long n;
  // cin >> n >> m;
  // unsigned long long sum = 0;
  // for(int i = n; i<=m; i++){
  //   sum += fib(i)%MOD;
  // }
  // cout << fib(m+2)-fib(n+1) << endl;

  cin >> n;
  cout << fib(n)%MOD << endl;
}
