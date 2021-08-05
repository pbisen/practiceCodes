#include<iostream>

using namespace std;

void pascal(int n);
long int factorial(int n);
long int ncr(int n, int r);

int main(){
    int n;

    cout<<"Enter Number of Rows to be Printed: ";
    cin>>n;

    pascal(n);

}

void pascal(int n){
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout<<ncr(i, j)<<" ";
        }
        cout<<endl;
    }

}

long int factorial(int n)
{
    long int factorial = 1;

    if (n == 0)
    {
        return 1;
    }
    else if (n < 0)
    {
        cout << "Enter Valid Numbers i.e Numbers greater than 0" << endl;
        return 0;
    }
    else
    {
        for (long int i = 1; i <= n; i++)
        {
            factorial = factorial * i;
        }
    }

    return factorial;
}

long int ncr(int n, int r){

    return (factorial(n))/((factorial(r))*(factorial(n-r)));
}