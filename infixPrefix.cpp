#include <iostream>
#include <string>
#include <stack>

using namespace std;

int precedence(char c)
{
    if (c == '^')
    {
        return 3;
    }
    else if (c == '*' || c == '/')
    {
        return 2;
    }
    else if (c == '+' || c == '-')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

string infixPrefix(string input)
{

    int n = input.length();
    string output;

    stack<char> operators;

    for (int i = 0; i < n / 2; i++)
    {

        swap(input[i], input[n - i - 1]);
    }

    for (int i = 0; i < n; i++)
    {

        if (input[i] >= 'a' && input[i] <= 'z')
        {
            output += input[i];
            continue;
        }

        if (input[i] == '(')
        {
            operators.push(input[i]);
            continue;
        }

        if (input[i] == ')')
        {
            while (operators.top() != '(' && !operators.empty())
            {
                output += operators.top();
                operators.pop();
            }

            operators.pop();
            continue;
        }

        while (!operators.empty() && precedence(operators.top()) > precedence(input[i]))
        {
            output += operators.top();
            operators.pop();
        }

        operators.push(input[i]);
    }

    while (!operators.empty())
    {
        output += operators.top();
        operators.pop();
    }

    int n2 = output.length();

    for (int i = 0; i < n2 / 2; i++)
    {

        swap(output[i], output[n2 - i - 1]);
    }

    return output;
}

int main()
{
    string input = "a+b-c*d/e^f";
    cout << infixPrefix(input) << endl;
}