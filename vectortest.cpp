#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v[3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            v[i].push_back(i);
        }

    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            cout<<v[i][j]<<endl;
        }
        cout<<endl;
    }

    

}