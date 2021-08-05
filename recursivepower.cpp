#include<iostream>

using namespace std;

int Power(int n, int nos){
    int power = 0;

    if(nos == 0){
        return 1;
    }

    

    power = n * Power(n, nos-1);

    return power;
}

int main(){
    int n,p;

    cin>>n>>p;

    cout<<Power(n, p)<<endl;
}