#include<iostream>
using namespace std;

int fun(int **p){
    *p = *p+1;
}

int func(int *p1, int *p2){
    p1 = p2;
    *p1 = 2;
}
int main(){
    // int n =10;
    // int *p = &n; // single pointer
    // int **p1 = &p; // double pointer
    // int ***p2 = &p1; //triple pointer
    // cout<<p<<endl;
    // cout<<p1<<endl;
    // cout<<p2<<endl;

    // How to maodify the value of n, using these pointers
    // fun(p1);
    // cout<<n<<" "<<endl;

    // *p = *p+5;
    // cout<<n<<endl;
    // **p1 = **p1+5;
    // cout<<n<<endl;
    // ***p2 = ***p2+5;
    // cout<<n<<endl;

    // char c[] = "GATE2024";
    // char *ptr = c;
    // cout<< ptr + c[3]-c[1];

    // int i=0, j=1;
    // func(&i, &j);
    // cout<<i<<j<<endl;

    // int *ptr;
    // int x= 0;
    // ptr = &x;
    // int y= *ptr;
    // *ptr=1;
    // cout<<x<<y;

    int a=5,b=10;
    int &name = a;
    int *ptr= &a;
    (*ptr)++;
    ptr=&b;
    *ptr= *ptr+5;
    name+=5;
    cout<<a<<b;
}