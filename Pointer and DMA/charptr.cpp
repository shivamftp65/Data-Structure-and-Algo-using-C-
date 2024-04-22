#include<iostream>
using namespace std;

int main(){
    char arr[5] = "abcd";
    char *ptr = arr;
    cout<<arr<<endl;
    cout<<(void*)arr<<endl;
    cout<<(void*)arr<<endl;
    cout<<ptr<<endl;
    cout<<(void*)ptr<<endl;

    char name = 'a';
    char *p = &name;
    cout<<p<<endl;
    cout<<(void*)p<<endl;

    return 0;
}