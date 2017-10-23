#include<iostream>

using namespace std;

bool isSorted(int a[], int size){
  if(size==1 || size==0){
    return true;
  }
  if(a[0] > a[1]){
    return false;
  }

  return isSorted(a+1, size-1);
}

int main(){

  int arr[] = {2,1,3,4,6,7,8};
  if(isSorted(arr, 7)){
    cout<<"True"<<endl;
  }else {
    cout<<"False"<<endl;
  }

  return 0;
}
