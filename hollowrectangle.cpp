#include<iostream>

using namespace std;

int main(){
    int len, breadth;

    cout<<"Enter length and Breadth: "<<endl;
    cin>>len>>breadth;

    for(int i = 0; i < len; i++){
        cout<<"*";
    }
    cout<<endl;

    for(int i = 0; i < breadth - 2; i++){
        cout<<"*";
        for(int i = 0; i < len-2; i++){
            cout<<" ";
        }
        cout<<"*"<<endl;

    }

    for(int i = 0; i < len; i++){
        cout<<"*";
    }

    cout<<endl;
    
}