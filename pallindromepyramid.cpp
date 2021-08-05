#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2*(n-i-1); j++){
            cout<<" ";
        }
        for(int j = i+1; j >= 1; j--){
            cout<<j<<" ";
        }
        for(int j = 2; j <= i+1; j++){
            cout<<j<<" ";
        }

        cout<<endl;
        
    }
}