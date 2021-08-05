#include<iostream>
#include<unordered_map>

using namespace std;

int main(){
    int inputarr[] = {1,2,3,3,4,1,7,4,5};
    unordered_map<int, int> m;

    for(int i = 0; i < sizeof(inputarr)/sizeof(int); i++){
        if(m.count(inputarr[i]) == 0){
            m.insert({inputarr[i], 1});
        }
        else{
            m[inputarr[i]]++;
        }
    }

    for(auto it : m){
        cout<<"Key: "<<it.first<<"\t"<<"Count: "<<it.second<<endl;
    }

}