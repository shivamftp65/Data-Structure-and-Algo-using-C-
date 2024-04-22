#include<iostream>
#include<vector>
#include<list>
#include <bits/stdc++.h>
using namespace std;

class Hashing{

    vector<list<int>> hashtable;
    int buckets;
    public:
    Hashing(int size){
        buckets = size;
        hashtable.resize(size);
    }

    int hashvalue(int key){
        return key % buckets; //division method for the hash function
    }

    void addKey(int key){
        int index = hashvalue(key);
        hashtable[index].push_back(key);
    }

    list<int>::iterator searchKey(int key){
        int idx = hashvalue(key);
        return find(hashtable[idx].begin(),hashtable[idx].end(), key);
    }

    void deleteKey(int key){

        int idx = hashvalue(key);

        if(searchKey(key) != hashtable[idx].end()){
            hashtable[idx].erase(searchKey(key));
            cout<<key<<" is deleted"<<endl;
        }
        else{
            cout<<"Key is not present in the hashtable" << endl;
        }

    }
};

int main(){

    Hashing h(10);
    h.addKey(5);
    h.addKey(9);
    h.addKey(3);

    h.deleteKey(3);
    h.deleteKey(3);


    
    return 0;
}