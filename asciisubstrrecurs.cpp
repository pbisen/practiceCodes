#include <iostream>
#include <string>

using namespace std;

void subs(string input, string start)
{

    if (input.length() == 0)
    {
        cout << start << endl;
        return;
    }

    subs(input.substr(1), start);
    subs(input.substr(1), start + input[0]);
    subs(input.substr(1), start + to_string((int)input[0]));
}

int main()
{
    string input;

    getline(cin, input);

    subs(input, "");
}