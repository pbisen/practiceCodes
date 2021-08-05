#include <iostream>

using namespace std;

long int factorial(long int n);

int main()
{
    long int input1, input2;

    cout << "Enter two numbers separated by space: ";
    cin >> input1 >> input2;

    cout<<"The value of factorials are: "<<endl;
    cout<<input1<<" = "<<factorial(input1)<<"\t"<<input2<<" = "<<factorial(input2)<<endl;
}

long int factorial(long int n)
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