#include<bits/stdc++.h>
#define MAX  1000000
typedef long long ll;

using namespace std;

int main(){
  int t,tc = 1;
  cin >> t;

  //Create Array
  bool isFreeCube[MAX];
  isFreeCube[0] = false;
  for(int i = 1; i < MAX; i++){
    isFreeCube[i] = true;
  }

  for(int i = 2; i*i*i < MAX; i++){
    if(isFreeCube[i]){
      for(int j = i*i*i; j < MAX; j+=i*i*i){
        isFreeCube[j] = false;
      }
    }
  }

  int counter = 0;
  int a[1000000];
  for(int i=1; i < MAX; i++){
    if(isFreeCube[i]){
      counter++;
      a[i]=counter;
    }else {
      a[i]=-1;
    }
  }

  while(t--){
    int n;
    cin >> n;
    int ans = a[n];
    cout << "Case " << tc++ << ": ";
    if(ans == -1){
      cout << "Not Cube Free";
    }else {
      cout << ans;
    }
    cout << endl;
  }
}
