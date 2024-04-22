#include<iostream>
using namespace std;

int main(){
    int num =10;
    int *p = &num;
    cout<<num <<endl << *p <<endl;
    *p+=5;
    cout<<*p <<endl << num <<endl;
    // cout<< num;



    return 0;
}