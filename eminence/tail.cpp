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
  int x = factorial(12);
  cout<<x<<endl;
  return 0;
}
