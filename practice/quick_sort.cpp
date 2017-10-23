#include<iostream>

using namespace std;

  void swap(int arr[], int a, int b){
    int temp;
    temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
  }

  // int partition(int arr[], int size){
  //   int key = arr[size-1];
  //   int count = 0;
  //   for(int i=0;i<size-1;i++){
  //     if(arr[i]<key){
  //       swap(arr, count, i);
  //       count += 1;
  //     }
  //   }
  //   swap(arr, size-1, count);
  //
  //   return count;
  // }

  int partition(int arr[], int size){
    int key = arr[0];
    int count = 1;
    for(int i=1;i<size;i++){
      if(arr[i]<key){
        swap(arr, count, i);
        count += 1;
      }
    }
    swap(arr, 0, count-1);

    return count-1;
  }

  void quick_sort(int arr[], int size){
    if((size == 0) || (size == 1)){
      return;
    }
    int c;
    c = partition(arr, size);
    quick_sort(arr, c);
    quick_sort(arr+(c+1), size-(c+1));
  }


int main(){
  int arr[] = {25, 57, 48, 37, 12, 92, 86, 33};
  int size = 8;
  cout << "Before Sorting" << endl;
  for(int i=0; i<size; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
  quick_sort(arr, size);
  cout << "After Sorting" << endl;
  for(int i=0; i<size; i++){
    cout << arr[i] << " ";
  }

  cout << endl;
  return 0;
}
