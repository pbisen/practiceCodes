#include<iostream>

using namespace std;

int main(){
    int len, breadth;

    cout<<"Enter length and Breadth: "<<endl;
    cin>>len>>breadth;

    for(int i = 0; i < breadth; i++){
        for(int j = 0; j < len; j++){
            cout<<"*";
        }
        cout<<endl;

    }
}