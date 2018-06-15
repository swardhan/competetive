#include<iostream>

using namespace std;

// int modRecursive(int a, int b, int c){
//   if(b == 0){
//     return 1;
//   }
//   if(b%2 == 0){
//     return modRecursive((a*a)%c, b/2, c);
//   }else{
//     return ((a%c)*(modRecursive((a*a)%c, b/2, c)));
//   }
// }

int main(){
  // cout << modRecursive(2,5,5) << endl;
  //iterative
  int a, b, c = 5, result = 1;
  cin >> a;
  cin >> b;
  while(b > 0){
    if(b&1){
      result = (result*a)%c;
      }
      b = b/2;
      a = (a*a)%c;
  }

  cout << result << endl;
  return 0;
}
