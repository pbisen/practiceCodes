#include<iostream>

using namespace std;

int main(){
    int height;

    cout<<"Enter height: "<<endl;
    cin>>height;

    for(int i = 0; i < height; i++){
        for(int j = 0; j < height - i; j++){
            cout<<j+ 1<<" ";
        }
        cout<<endl;

    }
}