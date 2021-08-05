#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;
    cout << "For Loop" << endl;
    cout << "Enter Number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    cout << "Sum: " << sum << endl;

    cout << "While Loop" << endl;

    int input;

    cin >> input;

    while (input > 0)
    {
        cout << input << endl;
        cin >> input;
    }

    cout << "Do...While Loop" << endl;

    cin >> input;

    do
    {
        cout << input << endl;
        cin >> input;
    } while (input > 0);
}