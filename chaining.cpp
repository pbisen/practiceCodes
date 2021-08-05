#include<iostream>
#include<list>
#include<vector>

using namespace std;

struct MyHash{
    int BUCKET;
    list<pair<int, int>>*table;

    MyHash(int k){
        table = new list<pair<int, int>>[k];
        BUCKET = k;
    }

    void insert(int k, int val){
        table[k % BUCKET].push_back(make_pair(k, val));
    }

    void remove(int k, int val){
        table[k % BUCKET].remove(make_pair(k, val));
    }

    bool search(int k, int val){
        for(auto it : table[k % BUCKET]){
            if(it == make_pair(k, val)){
                return true;
            }
        }

        return false;
    }

};

