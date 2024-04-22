#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int>targetsumpair(vector<int> &v, int target){

    unordered_map<int,int>m;
    vector<int>ans(2,-1);

    for(int i=0;i<v.size();i++){
        if(m.find(target-v[i])!=m.end()){
            ans[0] = m[target-v[i]];
            ans[1] = i;
        }
        else{
            m[v[i]] = i;
        }
    }
    return ans;
}

int main(){

    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    
    cout<<"Enter the elements of array: ";
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    int target;
    cout<<"Enter the target Sum : ";
    cin>>target;

    vector<int> ans = targetsumpair(v,target);
    cout<<ans[0]<<", " <<ans[1] <<endl;

    return 0;
}