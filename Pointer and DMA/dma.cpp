#include<iostream>
using namespace std;

int main(){
    // heap memory allocation for the variable
    int *ptr = new int;
    *ptr = 5; // value assign
    cout<<*ptr<<endl;

    float *ptr2 = new float;
    *ptr2 = 3.6;
    cout<<*ptr2<<endl;

    // heap memory allocation for the array
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int *p = new int[n];
    for(int i=0;i<n;i++){
        p[i] = i+1;
    }

    for(int i=0;i<n;i++){
        cout<<p[i]<<endl;
    }

    // deallocation of heap memory
    delete ptr;
    delete ptr2;
    delete[] p;

    cout<<p[0];

}