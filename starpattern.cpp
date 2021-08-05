#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < n; j++){
            if(i == 0 && j % 4 == 2 || i == 1 && j % 2 ==1 || i == 2 && j %4 == 2){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

}