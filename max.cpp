#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter three number separated by whitespace: ";
    cin >> a >> b >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << "Largest: " << a << endl;
        }
        else
        {
            cout << "Largest: " << c << endl;
        }
    }
    else
    {
        if (b > c)
        {
            cout << "Largest: " << b << endl;
        }
        else
        {
            cout << "Largest: " << c << endl;
        }
    }
}