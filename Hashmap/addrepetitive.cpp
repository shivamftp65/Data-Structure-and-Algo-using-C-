#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Number of elements ";
    cin>>n;
    
    vector<int> input(n);

    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>input[i];
    }

    map<int,int> m;
    for(int i=0;i<n;i++){
        //storing the frequency of every element in input array
        m[input[i]]++;
    }

    for(auto itr:m){
        cout<<itr.first<<"-"<<itr.second<<endl;
    }
    int sum = 0;
    // finding sum of the repetitive element
    for(auto it:m){
        if(it.second > 1){
            sum += it.first;
        }
    }

    cout<<"Sum of repetetive elements: "<< sum<<endl;


    return 0;

}