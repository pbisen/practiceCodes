#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int input;
    cout<<"Enter Number: ";
    cin>>input;
    bool flag = 0;
    for(int i = 2; i <= (int)sqrt(input); i++){
        if(input%i == 0){
            flag = 1;
            break;

        }
    }

    if(flag == 1){
        cout<<"Not Prime"<<endl;
    }
    else{
        cout<<"Prime"<<endl;
    }

}
