#include<iostream>
#include<cstring>
#include<unordered_map>
#include<map>

using namespace std;


char nonRepeatingCharacter(string str){
  map<char, int> m;
  string::iterator it;
  for(int i=0; i<str.length(); i++){
    m[str[i]] += 1;
  }

  for(int i=0; i<str.length();i++){
    if(m[str[i]]==1){
      return str[i];
    }
  }
  return str[0];
}

int main(){

  string str = "ABCDABCDE";
  cout<<nonRepeatingCharacter(str)<<endl;

  return 0;
}
