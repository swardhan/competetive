#include<bits/stdc++.h>
using namespace std;
int kadane(int* arr, int* start, int* finish, int n)
{
    // initialize sum, maxSum and
    int sum = 0, maxSum = INT_MIN, i;

    // Just some initial value to check for all negative values case
    *finish = -1;

    // local variable
    int local_start = 0;

    for (i = 0; i < n; ++i)
    {
        sum += arr[i];
        if (sum < 0)
        {
            sum = 0;
            local_start = i+1;
        }
        else if (sum > maxSum)
        {
            maxSum = sum;
            *start = local_start;
            *finish = i;
        }
    }

     // There is at-least one non-negative number
    if (*finish != -1)
        return maxSum;

    // Special Case: When all numbers in arr[] are negative
    maxSum = arr[0];
    *start = *finish = 0;

    // Find the maximum element in array
    for (i = 1; i < n; i++)
    {
        if (arr[i] > maxSum)
        {
            maxSum = arr[i];
            *start = *finish = i;
        }
    }
    return maxSum;
}

int rectangle_sum(int **input, int m, int n){

  int left, right, maxSum = INT_MIN, temp, start, finish, finalLeft, finalRight, finalTop, finalBottom;
  for(left = 0; left < n; left++){
    int sum[m];
    for(int k = 0; k < m; k++){
      sum[k] = 0;
    }
    for(right = left; right < n; right++){
      for(int i = 0; i < m; i++){
        sum[i] += input[i][right];
      }
        //
        temp = kadane(sum, &start, &finish, m);

        if (temp > maxSum){
          maxSum = temp;
          finalLeft = left;
          finalRight = right;
          finalTop = start;
          finalBottom = finish;
       }
      }
    }

  return maxSum;

}

int main(){
  int m, n;
  cin >> m >> n;
  int **input = new int * [m];
  for(int i = 0; i < m; i++){
    input[i] = new int[n];
  }

  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      cin >> input[i][j];
    }
  }

  int ans = rectangle_sum(input, m, n);
  cout << ans << endl;
  for(int i = 0; i < m; i++ ){
    delete input[i];
  }
  delete [] input;

  return 0;
}
