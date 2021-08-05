#include <iostream>
#include <string>

using namespace std;

string endx(string input)
{

    if (input.length() == 0)
    {
        return "";
    }

    if(input[0] =='x'){
        
        return endx(input.substr(1)) + 'x';
    }
    else{
        return input[0] + endx(input.substr(1));
    }

}

int main()
{
    string input;

    getline(cin, input);


    cout <<endx(input) <<endl;
}