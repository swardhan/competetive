#include<iostream>

using namespace std;

void print_subseq(string input, string output){
  if(input.empty()){
    cout << output << endl;
    return;
  }

  print_subseq(input.substr(1), output+input[0]);
  print_subseq(input.substr(1), output);
}

int main(){
  string input;
  cin >> input;
  string output = "";
  print_subseq(input, output);

  return 0;
}
