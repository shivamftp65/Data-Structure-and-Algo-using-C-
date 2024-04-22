#include<iostream>
using namespace std;

int main(){
    int a =10;
    // Printing the address of a
    cout<< &a<<endl;
    int *ptr = &a;
    cout<<ptr<<endl;

    float m =2.6;
    float * ptr1 = &m;
    cout<< ptr1 << endl;

    char c = 'S';
    char *p = &c;
    cout<<sizeof(p)<<endl;

    cout<< sizeof(ptr)<< endl << sizeof(ptr1) << endl;
    cout<< *ptr << endl << *ptr1 << endl<< *p << endl;

    return 0;
}