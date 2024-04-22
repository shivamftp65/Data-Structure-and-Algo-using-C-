#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int maxlengthZeroSum(vector<int>&v){

    unordered_map<int,int>m;
    int prefixSum =0;
    int maxlen = 0;

    for(int i= 0;i<v.size();i++){
        prefixSum+=v[i];

        if(prefixSum == 0){
            maxlen++;
        }

        if(m.find(prefixSum)!=m.end()){
            maxlen = max(maxlen, i - m[prefixSum]);
        }
        else{
            m[prefixSum] = i;
        }
    }

    return maxlen;

}

int main(){

    int n;
    cout<<"Enter Numbers of element: ";
    cin>>n;

    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    cout<<"Maxlength : "<<maxlengthZeroSum(v);

    return 0;
}