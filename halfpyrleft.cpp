#include<iostream>

using namespace std;

int main(){
    int height;

    cout<<"Enter height: "<<endl;
    cin>>height;

    for(int i = 0; i < height; i++){

        for(int j = height - i - 1; j > 0; j--){
            cout<<" ";
        }

        for(int j = 0; j < i+1; j++){
            cout<<"*";
        }

        cout<<endl;

    }
}