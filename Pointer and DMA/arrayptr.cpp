#include<iostream>
using namespace std;

/*
    Array and Pointers
*/
int main(){
    int arr[5] = {1,2,3,8,5};
    int *ptr = arr;
    for(int i=0;i<5;i++){
        cout<<*ptr <<endl;
        ptr++;
    }
    for(int i=0;i<5;i++){
        cout<<&arr[i]<<endl;
        cout<<arr+i <<endl;
        cout<<*(arr+i)<<endl;
        cout<<i[arr]<<endl;
    }
    return 0;
}