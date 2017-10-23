#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

vector<int> longestSubsequence(int* arr, int n){
  sort(arr, arr+n);
	vector<int> result;
  	int begin=0, end=1, max_len=0;
  	for(int i=0; i<n; i++){
      for(int j=i; arr[j]==(arr[j+1]-1); j++){
        if(max_len <= (j-i+1)){
          max_len = (j-i+1);
          begin=i;
          end=j+1;
        }
        // begin=i;
        // end = j;
      }
    }
    for(int i=0; i<n; i++){
      cout<<arr[i]<<" ";
    }

    for(int i=begin; i<=end; i++){
      result.push_back(*(arr+i));
    }
  	return result;
}


int main(){

  int arr[] = {693, 697, 299, 662, 290, 288, 925, 234, 257, 192, 687, 144, 143, 710, 66, 955, 321, 629, 989, 621};
  int* p = arr;
  int n=20;
  cout<<endl;
  vector<int> v = longestSubsequence(arr, n);
  vector<int>::iterator it;
  for(it=v.begin(); it!=v.end(); it++){
    cout<<*it<<" ";
  }
  return 0;
}
