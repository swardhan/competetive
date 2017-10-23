#include<iostream>

using namespace std;

int main(){

    // char c = 'A';
    // int i = c;
    // cout << i << endl;
    // cout << (int*)&c << endl;
    //
    // char *p = &c;
    // int *pc = (int*)p;
    //
    // cout << p << endl;
    // cout << pc << endl;

    int i = 65;
    char c = i;
    cout << c << endl;

    int *p = &i;
    char * pc = (char*)p;

    cout << p << endl;
    cout << &c << endl;

    cout << *p << endl;
    cout << *pc << endl;
    cout << *(pc+1) << endl;
    cout << *(pc+2) << endl;
    cout << *(pc+3) << endl;



  return 0;
}
