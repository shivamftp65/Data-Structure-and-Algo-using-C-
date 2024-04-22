#include<iostream>
#include<map>
using namespace std;

int main(){
    multimap<string, int> directory;

    directory.insert(make_pair("urvi",69920001));
    directory.insert(make_pair("sadhvi",789456));
    directory.insert(make_pair("sadhvi",321456));
    // directory["urvi"] = 12345;

    for(auto it:directory){
        cout<<it.first<<" - "<<it.second<<endl;
    }

    cout<<directory.count("sadhvi");

    return 0; 
}