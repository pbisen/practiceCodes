#include<iostream>

using namespace std;

int main (){
    int n; cin >> n;

    if(n & (n-1)){
        cout<<"Not a Power of Two"<<endl;

    }
    else{
        cout<<"Power of two"<<endl;
    }
}