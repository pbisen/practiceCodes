#include <iostream>

using namespace std;

int factorial(int n);

int main()
{
    cout << "Enter N and K" << endl;
    int N, K;
    cin >> N >> K;

    int nos;

    nos = (factorial(N) / ((factorial(K)) * (factorial(N - K))));

    int possibilities[nos][K];

    // for (int num = 0; num < nos; num++)
    // {
    //     for (int i = 0; i < N; i++)
    //     {
    //         for (int j = i + 1; j < N; j++)
    //         {
    //             for (int k = j + 1; j < N; j++)
    //             {
    //                 for(int pos = 0; pos < k; pos++){
    //                     nos[]
    //                 }
    //             }
    //         }
    //     }
    // }

    
}

int factorial(int n)
{
    int factorial = 1;

    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }

    return factorial;
}