#include<iostream>

using namespace std;

int Sum(int n){
    int sum = 0;

    if(n == 0){
        return 0;
    }

    sum = n + Sum(n-1);

    return sum;
}

int main(){
    int n;

    cin>>n;

    cout<<Sum(n)<<endl;
}