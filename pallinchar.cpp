#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    char array[n+1];

    cin>>array;

    bool valid = true;

    for(int i = 0; i < n/2; i++){
        if(array[i] != array[n-i-1]){
            valid = false;
            break;
        }
    }

    if(valid){
        cout<<"Pallindrome"<<endl;
    }
    else{
        cout<<"Not Pallindrome"<<endl;
    }
}