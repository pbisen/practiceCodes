#include<iostream>
#include<cmath>

using namespace std;

bool isPrime(int input);

int main(){
    int lower, upper;

    cout<<"Enter Lower and Upper Limit spearted by space: ";
    cin>>lower>>upper;

    cout<<"Prime: ";

    for(int i = lower; i <= upper; i++){
        if(isPrime(i) == true){
            cout<<i<<", ";
        }
    }

    cout<<endl;

}

bool isPrime(int input){
    bool status = true;
    for(int i = 2; i <= sqrt(input); i++){
        if(input % i == 0){
            status = false;
        }
    }

    return status;
}