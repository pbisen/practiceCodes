#include <iostream>
#include <string>

using namespace std;

void reverse(string input)
{

    if (input.length() == 0)
    {
        return;
    }

    reverse(input.substr(1));
    cout << input[0];
}

int main()
{
    string input;

    getline(cin, input);

    reverse(input);

    cout << endl;
}