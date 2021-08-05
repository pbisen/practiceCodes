#include<iostream>

using namespace std;

long int factorial(int n);

int main(){
    int n, r;
    cout<<"Enter n and r: ";
    cin>>n, r;

    int ncr;

    ncr = (factorial(n))/((factorial(r))*(factorial(n-r)));

    cout<<"nCr = "<<ncr<<endl;




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