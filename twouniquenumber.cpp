#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int array[n];
    int xornum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < n; i++)
    {
        xornum = xornum ^ array[i];
    }

    int index = 0;

    //finds the first set bit index

    while (1)
    {
        if (1 << index & xornum)
        {
            break;
        }
        else
        {
            index++;
        }
    }

    int target = 1 << index;

    int xorsum2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (array[i] & target)
        {
            xorsum2 = xorsum2 ^ array[i];
        }
    }

    xornum = xorsum2 ^ xornum;

    cout<<xorsum2<<"\t"<<xornum<<endl;
}