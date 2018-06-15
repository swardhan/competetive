#include<iostream>

using namespace std;

class Number1;
class Number2;

class Number1{
  int myNum;
public:
    Number1(){
    }
    void getNum(){
      int temp;
      cout << "Enter the Number: ";
      cin >> temp;
      this -> myNum = temp;
      cout << endl;
    }
  friend int find_greatest(Number1 a, Number2 b);
};

class Number2{
  int myNum;
public:
    Number2(){
    }
    void getNum(){
      int temp;
      cout << "Enter the Number: ";
      cin >> temp;
      this -> myNum = temp;
      cout << endl;
    }
  friend int find_greatest(Number1 a, Number2 b);
};

int find_greatest(Number1 first, Number2 second){
  return first.myNum>second.myNum?first.myNum:second.myNum;
}

int main(){
  Number1 a;
  Number2 b;
  a.getNum();
  b.getNum();
  cout<<"Greatest: "<<find_greatest(a, b) << endl;
}
