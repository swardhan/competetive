#include<bits/stdc++.h>

using namespace std;

long merge(long A[],int left,int mid,int right){

	int i=left,j=mid,k=0;

  long count = 0;

    int temp[right-left+1];
  	while(i<mid && j<=right){
  		if(A[i] <= A[j]){
        count += (right - j+1)*A[i];
  			temp[k++] = A[i++];
  		}else{
        temp[k++] = A[j++];
  		}
  	}
  	while(i<mid){
  		temp[k++] = A[i++];
  	}
  	while(j<=right){
  		temp[k++] = A[j++];
  	}

  	for(int i=left,k=0;i<=right;i++,k++){
  		A[i] = temp[k];
  	}
    // cout << count << endl;

	return count;
}

long merge_sort(long a[], int left, int right){
  long total = 0;
  if(left < right){
    int mid = (left + right)/2;
    long countLeft = merge_sort(a, left, mid);
    long countRight = merge_sort(a, mid+1, right);
    long mergeTotal = merge(a, left, mid+1, right);
    return countRight + countLeft + mergeTotal;
  }
  return total;
}

long murderSolve(long stairs[], long n){
  long ans = merge_sort(stairs, 0, n-1);
  return ans;
}

int main(){
  int t;
  cin >> t;
  while(t--){
      long n;
      cin >> n;
      long stairs[n];
      for(long i = 0; i < n; i++){
        cin >> stairs[i];
      }

      cout << murderSolve(stairs, n) << endl;

      // int total = 0;
      // for(int i = 1; i < n; i++){
      //   for(int j=0; j<i; j++){
      //     if(stairs[j] < stairs[i]){
      //       total += stairs[j];
      //     }
      //   }
      // }
      // cout << total << endl;
  }

}
