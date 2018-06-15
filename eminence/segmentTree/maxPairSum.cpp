#include<bits/stdc++.h>
using namespace std;

struct node{
  int maximum;
  int smaximum;
};

void buildTree(int* arr, node* tree, int treeIndex, int start, int end){

  if(start==end){
    tree[treeIndex].maximum = arr[start];
    tree[treeIndex].smaximum = INT_MIN;
    return;
  }

  int mid = (start+end)/2;
  buildTree(arr, tree, 2*treeIndex,start,mid);
  buildTree(arr, tree, 2*treeIndex+1, mid+1, end);

  node left = tree[2*treeIndex];
  node right = tree[2*treeIndex+1];
  tree[treeIndex].maximum = max(left.maximum, right.maximum);
  tree[treeIndex].smaximum = max(max(left.maximum, right.smaximum),max(left.smaximum, right.maximum));
  return;
}

int main(){
  int n;
  cin >> n;
  int* arr = new int[n];
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }

  node* tree = new node[3*n];
  buildTree(arr, tree, 1, 0, n-1);

  for(int i=0; i<3*n; i++){
    cout << tree[i].maximum << " , " << tree[i].smaximum << endl;
  }

  return 0;
}
