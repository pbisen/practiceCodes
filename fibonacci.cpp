#include<iostream>

using namespace std;

void fib(int n);

int main(){
    int n;

    cout<<"Enter the number: ";
    cin>>n;

    fib(n);

}

void fib(int n){
    int n1,n2,newval;
    n1 = 0; n2 = 1;

    if(n <=0){
        cout<<"Enter Valid Number"<<endl;

    }else if(n == 1){
        cout<<"0"<<endl;
    }else if(n == 2){
        cout<<"0, 1,"<<endl;
    }else{
        cout<<"0, 1, ";
        for(int i = 0; i < n-2; i++){
            newval = n1+n2;
            cout<<newval<<", ";
            n1 = n2;
            n2 = newval;
        }
        cout<<endl;
    }

}