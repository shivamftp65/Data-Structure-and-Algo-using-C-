#include<iostream>
#include<map>
using namespace std;

int main() {

    // map<string,int> directory;

    // directory["naman"] = 3878;
    // directory["Shivam"] = 884098;
    // directory["Vishal"] = 5128;

    // for(auto element: directory){
    //     cout<< "Name - "<<element.first<<endl;
    //     cout<<"Phone No. - "<< element.second <<endl;
    // }

    // map<string,int>::reverse_iterator itr;


    // for(itr = directory.rbegin(); itr!= directory.rend();itr++){
    //     cout<<itr->first <<"--"<<itr->second <<endl;
    // }

    map<int,int>m;
    m.insert({1,10});
    m.insert({2,20});
    m.insert({3,30});
    m[4] = 40;
    m.erase(m.find(3),m.end());
    
    for(auto i: m){
        cout<<i.first<<"-"<<i.second<<endl;
    }

    return 0;
}