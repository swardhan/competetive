#include<bits/stdc++.h>

using namespace std;

int board[11][11];

bool isPossible(int size, int row, int col){

  //in the column
  for(int i=row-1; i>=0; i--){
    if(board[i][col] == 1){
      return false;
    }
  }
  //upper right Diagonal
  for(int i=row-1, j=col+1; j<size && i>=0;i--, j++){
    if(board[i][j]==1){
      return false;
    }
  }
  //upper left diagonal
  for(int i=row-1, j=col-1; i>=0 && j>=0; i--, j--){
    if(board[i][j]==1){
      return false;
    }
  }
  return true;
}

void nQueenHelper(int size, int row){
  if(row == size){
    //print the matrix and return
    //so that next position is checked
    for(int i=0; i<size; i++){
      for(int j=0; j<size; j++){
        cout << board[i][j] << " ";
      }
      cout << endl;
    }
    cout << endl;
    return;
  }
  //check if the position can be filled in a certain row
  //and then pass to the next smaller problem
  for(int i=0; i<size; i++){
    if(isPossible(size,row,i)){
      board[row][i] = 1;
      nQueenHelper(size, row+1);
      board[row][i] = 0;
    }
  }
  return;
}

void placeNQueens(int n){
  //call helper to print the board after last row is
  //reached  and takes board, row as arguments
  memset(board, 0, sizeof(board));
  nQueenHelper(n, 0);
}

int main(){
  int n;
  cin >> n;
  placeNQueens(n);
  return 0;
}
