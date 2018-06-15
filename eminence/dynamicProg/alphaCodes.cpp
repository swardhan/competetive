#include<bits/stdc++.h>
using namespace std;

int num_codes(int * input, int size){
  if(size == 1 || size == 0){
    return 1;
  }
  int output = num_codes(input, size-1);

  if(input[size-2]*10 + input[size - 1] <= 26){
    output += num_codes(input, size - 2);
  }

  return output;
}

int num_codes2(int * input, int size, int * out){
  if(size == 1 || size == 0){
    return 1;
  }

  if(out[size] > 0){
    return out[size];
  }

  int output = num_codes2(input, size-1, out);

  if(input[size-2]*10 + input[size - 1] <= 26){
    output += num_codes2(input, size - 2,  out);
  }

  out[size] = output;
  return output;
}

int main(){

  int size;
  cin >> size;
  int arr[size], output_arr[size+1];
  memset(output_arr, 0, sizeof(output_arr));
  for(int i = 0; i < size; i++){
    cin >> arr[i];
  }
  cout << num_codes2(arr, size, output_arr) << endl;

}
