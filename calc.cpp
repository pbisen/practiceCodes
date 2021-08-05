#include<iostream>
using namespace std;

int main(){
    float n1, n2;
    char op;

    cout<<"Enter two numbers separated with whitespace"<<endl;
    cin>>n1>>n2;

    cout<<"enter Operator"<<endl;
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<n1+n2<<endl;
        break;
    case '-':
        cout<<n1-n2<<endl;
        break;
    case '*':
        cout<<n1*n2<<endl;
        break;
    case '/':
        cout<<n1/n2<<endl;
        break;
    
    default:
    cout<<"Enter + - * / operator"<<endl;
        break;
    }
}