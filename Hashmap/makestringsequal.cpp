#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

bool canMakeString( vector<string>&v){

    unordered_map<char, int> m;
    for(auto str:v){
        for(char c:str){
            m[c]++;
        }
    }
    cout<<"printing the frequency of elelment"<<endl;
    int n = v.size();
    for(auto ele:m){
        cout<<ele.first<<"-"<<ele.second<<endl;
        if(ele.second % n != 0){
            
            return false;
        }
    }

    return true;
}

int main(){
    int n;
    cout<<"Enter the length of String: ";
    cin>>n;

    cout<<"Enter the  string: ";
    vector<string>v(n);
    for(int i=0; i<n;i++){
        cin>>v[i];
    }

    cout<<(canMakeString(v)? "yes" : "No" )<< endl;

    return 0;
}