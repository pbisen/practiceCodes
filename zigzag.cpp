#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    for(int i = 0; i < 3; i++){
        if(i == 0){
            for(int j = 0; j < n; j++){
                if(j+2 %4 == 0){
                    cout<<" *";
                }
                else{
                    cout<<" ";
                }

            }
            cout<<endl;
        }
        else if(i == 1){
            for(int j = 0; j < n; j++){
                if(j+1 %2 == 0){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }

            }
            cout<<endl;
        }
        else if(i == 2){
            for(int j = 0; j < n; j++){
                if(j %4 == 0){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }

            }
            cout<<endl;
        }
    }

}