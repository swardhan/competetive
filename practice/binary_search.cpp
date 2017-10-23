#include<iostream>

using namespace std;

int binarySearch(int a[], int size, int key){
  int mid;
  mid = (size+1)/2;
  if(a[mid]==key){
    return mid;
  }else if(size == 0){
      return -1;
  }
  if(key<a[mid]){
    int t = binarySearch(a, mid-1, key);
    if (t==-1){
      return -1;
    } else {
      return t;
    }
  }else if (key > a[mid]){
    int t = binarySearch(a+(mid), size-mid, key);
    if(t==-1){
      return -1;
    }else {
      return mid + t;
    }
  }
}

 int main(){
   int a[1000];
   int n, size;
   cin >> size;
   for(int i =0; i<size; i++){
     cin>>a[i];
   }
   cin >> n;
   int ans = binarySearch(a, size, n);
   cout << binarySearch(a, size, n) << endl;
   cout << "Element " << a[ans] << " at " << ans << endl;


   return 0;
 }
