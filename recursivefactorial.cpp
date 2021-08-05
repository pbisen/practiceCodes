#include<iostream>

using namespace std;

int Fibo(int n){
    int fibo = 0;

    if(n == 0){
        return 0;
    }else if(n == 1){
        return 1;
    }

    

    fibo = Fibo(n-1) + Fibo(n-2);

    return fibo;
}

int main(){
    int n;

    cin>>n;

    cout<<Fibo(n)<<endl;
}