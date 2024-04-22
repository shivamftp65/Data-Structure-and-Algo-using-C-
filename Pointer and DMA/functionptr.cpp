#include<iostream>
using namespace std;

void incr(int *n){
    *n = *n+1;
}

int main(){
    int num =10;
    int temp = num;
    cout<<temp<<endl;
    incr(&num);
    cout<<num<<endl;
    return 0;
}