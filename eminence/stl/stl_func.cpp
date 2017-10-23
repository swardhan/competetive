#include<iostream>
#include<algorithm>

using namespace std;

struct Interval {
  int st;
  int et;
};

bool compare(Interval i1, Interval i2){
  return i1.et < i2.st;
}

int main(){

  // Interval arr[] = {{6,4}, {3,4}, {4,6}, {8,13}};
  // sort(arr, arr+4, compare);
  int arr[] = {1,3,2,5,7,6};
  sort(arr+2, arr+6);
  for(int i=0;i<6;i++){
    cout<<arr[i] << " ";
  }
  // for(int i=0; i<4; i++){
  //   cout<<arr[i].st<<" : "<<arr[i].et<<endl;
  // }
  cout<<endl;
  cout<<binary_search(arr, arr+6, 3);
  cout<<endl;

  cout<<lower_bound(arr, arr+6, 7) - arr;
  cout<<endl;

  cout<<upper_bound(arr, arr+6, 7) - arr;
  cout<<endl;

  return 0;
}
