#include <iostream>
#include <string>

using namespace std;

void replace(string input)
{

    if (input.length() == 0)
    {
        return;
    }

    if(input[0] == 'p' && input[1] == 'i'){
        cout<<"3.14";
        replace(input.substr(2));
    }
    else{
        cout<<input[0];
        replace(input.substr(1));
    }

}

int main()
{
    string input;

    getline(cin, input);

    replace(input);

    cout << endl;
}