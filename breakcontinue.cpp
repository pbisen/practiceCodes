#include<iostream>

using namespace std;

int main(){
    
    int lower, upper,i,j;
    cout<<"Enter Lower Limit"<<endl;
    cin>>lower;

    cout<<"Enter Upper Limit"<<endl;
    cin>>upper;

    for(i = lower; i <= upper; i++){
        for(j = 2; j < i; j++){
            if(i%j == 0){
                break;
            }
        }
        if(j == i){
            cout<<"Prime: "<<i<<endl;
        }
    }
}