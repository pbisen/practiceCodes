#include<iostream>

using namespace std;


int main(){
    int n;
    cin>>n;

    int array[n];
    int xornum = 0;

    for(int i = 0; i < n; i++){
        cin>>array[i];
    }

    for(int i = 0; i < n; i++){
        xornum = xornum ^ array[i];
    }

    cout<<xornum<<endl;


}