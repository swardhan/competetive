#include<iostream>

using namespace std;

void merge(int a[], int b[], int size1, int size2){
  int size3 = (size1 + size2), k=0, i=0, j=0;
  int c[size3];
  for(;(i < size1) && (j < size2); k++){
    if(a[i] < b[j]){
      c[k] = a[i++];
    }else {
      c[k] = b[j++];
    }
  }
  while(i<size1){
    c[k++] = a[i++];
  }
  while(j<size2){
    c[k++] = b[j++];
  }
  for(int i=0; i<size3; i++){
    a[i] = c[i];
  }
}

void merge_sort(int a[], int size){
  if(size==1 || size==0){
    return;
  }
  merge_sort(a, size/2);
  merge_sort(a+(size/2), (size+1)/2);
  merge(a, a+(size/2), size/2, (size+1)/2);
}

int main(){
  int a[] = {5,4,3,2,1,6,5,3,6,8,5,12,54};
  merge_sort(a, 13);
  for(int i=0; i<13; i++){
    cout << a[i] << endl;
  }

  return 0;
}
