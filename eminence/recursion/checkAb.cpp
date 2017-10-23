#include<iostream>
#include<stdio.h>
using namespace std;

bool check_ab(char *input, int start){
  if(input[start] == '\0')
    return true;

  if(input[start] != 'a')
    return false;

  if(input[start+1] != '\0' && input[start+2] != '\0'){
    if(input[start+1] == 'b' && input[start+2] == 'b'){
        return check_ab(input, start+3);
    }
  }

  return check_ab(input, start+1);
}

main(){

 char s[100];
 cin>>s;

  if(check_ab(s, 0)){
   cout<<"valid substring";
  }
  else{
   cout<<"Not a valid substring" << endl;
  }






}
