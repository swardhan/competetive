#include<iostream>

using namespace std;

class Rectangle{
  int length;
  int width;
  public:
    Rectangle(){
    }
    void getDimensions(){
      int length, width;
      cout << "Enter the Dimensions: ";
      cin >> length >> width;
      this -> length = length;
      this -> width = width;
    }
    friend int area(Rectangle rect);
};

int area(Rectangle rect){
  return rect.length*rect.width;
}

int main(){
  Rectangle rect;
  rect.getDimensions();
  cout << "Area: " << area(rect) << endl;
}
