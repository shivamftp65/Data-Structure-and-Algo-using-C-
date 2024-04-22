#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

    unordered_map<int,string> record;
    //roll, name

    record.insert(make_pair(3, "ria"));
    record[1]= "bali";
    record[2]="Animesh";
    // record[3]="Payal";
    // record.insert(make_pair(3, "Payal"));

    for(auto pair:record){
        cout<<pair.first<<"- "<<pair.second<<endl;
    }

    return 0;
}