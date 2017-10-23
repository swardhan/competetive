#include<iostream>
#include<vector>
#include<string>
#include<utility>
#include<set>
#include<map>
#include<unordered_map>
using namespace std;

int main(){

  //map
  int arr[] = {1,2,3,4,5,6,5};
  unordered_map<int, int> m;

  for(int i=0; i<7; i++){
    m[arr[i]] = m[arr[i]] + 1;
  }

  unordered_map<int, int>:: iterator it;
  for(it=m.begin(); it!=m.end(); it++){
    cout<<it->first<<" :"<<it->second<<endl;
  }
  cout<<endl;
  m.erase(1);
  for(it=m.begin(); it!=m.end(); it++){
    cout<<it->first<<" :"<<it->second<<endl;
  }

  // //map
  // int arr[] = {1,2,3,4,5,6,5};
  // map<int, int> m;
  //
  // for(int i=0; i<7; i++){
  //   m[arr[i]] = m[arr[i]] + 1;
  // }
  //
  // map<int, int>:: iterator it;
  // for(it=m.begin(); it!=m.end(); it++){
  //   cout<<it->first<<" :"<<it->second<<endl;
  // }
  // cout<<endl;
  // m.erase(1);
  // for(it=m.begin(); it!=m.end(); it++){
  //   cout<<it->first<<" :"<<it->second<<endl;
  // }


  //Set
  // set<int> s;
  // int arr[] = {1,2,3,4,5,6,5};
  //
  // for(int i=0; i<7; i++){
  //   s.insert(arr[i]);
  // }
  //
  // set<int>::iterator it;
  //
  // for(it=s.begin(); it!=s.end(); it++){
  //   cout<<*it<<endl;
  // }
  //
  // if(s.find(7) == s.end()){
  //   cout<<"Element Not Found\n";
  // }else {
  //   cout<<"Element Found\n";
  // }

  //Pair
  // pair<int, char> p1;
  // p1 = make_pair(2, 'b');
  // pair<int, char> p2(1, 'a');
  // cout<<p2.first<<" "<<p2.second<<endl;
  // cout<<p1.first<<" "<<p1.second<<<endl;

  //String
  // string s1 = "Saumya";
  // string s2(s1,0,3);
  // cout<<s1<<s2<<endl;
  // string s3 = s1.substr(0,6);
  // cout<<s3<<endl;
  //
  // if(s1.compare(s3) == 0){
  //   cout<<s1<<" is equal to "<<s3<<endl;
  // }else {
  //   cout<<s1<<" is not equal to "<<s3<<endl;
  // }

  //Vector
  // vector<int> v;
  //
  // for(int i=0; i<5; i++){
  //   v.push_back(i+1);
  // }
  //
  // vector<int>::iterator it;
  //
  // for(it=v.begin();it != v.end(); it++){
  //   cout<<*it<<endl;
  // }

  return 0;
}
