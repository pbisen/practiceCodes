#include <iostream>
#include <stack>
#include <string>

using namespace std;

string infixToPostfix(string exp)
{
    stack<char> operatorNormal;

    string postfix;

    int len = sizeof(exp) / sizeof(char);

    for (int i = 0; i < len; i++)
    {
        if (exp[i] >= 'a' && exp[i] <= 'z')
        {
            postfix += exp[i];
        }
        else
        {
            switch (exp[i])
            {
            case '+':
                if (operatorNormal.empty())
                {
                    operatorNormal.push(exp[i]);
                    continue;
                }
                if (operatorNormal.top() == '*' || operatorNormal.top() == '/' || operatorNormal.top() == '^')
                {
                    postfix += operatorNormal.top();
                    operatorNormal.pop();
                    i--;
                    continue;
                }
                if (operatorNormal.top() == '-' || operatorNormal.top() == '+')
                {
                    postfix += operatorNormal.top();
                    operatorNormal.pop();
                    i--;
                    continue;
                }

                operatorNormal.push(exp[i]);
                break;

            case '-':
                if (operatorNormal.empty())
                {
                    operatorNormal.push(exp[i]);
                    continue;
                }
                if (operatorNormal.top() == '*' || operatorNormal.top() == '/' || operatorNormal.top() == '^')
                {
                    postfix += operatorNormal.top();
                    operatorNormal.pop();
                    i--;
                    continue;
                }
                if (operatorNormal.top() == '-' || operatorNormal.top() == '+')
                {
                    postfix += operatorNormal.top();
                    operatorNormal.pop();
                    i--;
                    continue;
                }

                operatorNormal.push(exp[i]);
                break;

            case '*':
                if (operatorNormal.empty())
                {
                    operatorNormal.push(exp[i]);
                    continue;
                }
                if (operatorNormal.top() == '*' || operatorNormal.top() == '/' )
                {
                    postfix += operatorNormal.top();
                    operatorNormal.pop();
                    i--;
                    continue;
                }
                if (operatorNormal.top() == '-' || operatorNormal.top() == '+')
                {
                    operatorNormal.push(exp[i]);
                    continue;
                }
                if(operatorNormal.top() == '^'){
                    postfix += operatorNormal.top();
                    operatorNormal.pop();
                    i--;
                    continue;
                }

                operatorNormal.push(exp[i]);
                break;
            case '/':
                if (operatorNormal.empty())
                {
                    operatorNormal.push(exp[i]);
                    continue;
                }
                if (operatorNormal.top() == '*' || operatorNormal.top() == '/')
                {
                    postfix += operatorNormal.top();
                    operatorNormal.pop();
                    i--;
                    continue;
                }
                if (operatorNormal.top() == '-' || operatorNormal.top() == '+')
                {
                    operatorNormal.push(exp[i]);
                    continue;
                }
                if(operatorNormal.top() == '^'){
                    postfix += operatorNormal.top();
                    operatorNormal.pop();
                    i--;
                    continue;
                }

                operatorNormal.push(exp[i]);
                break;

            case '^':
                operatorNormal.push(exp[i]);
                break;

            case '(':
                operatorNormal.push(exp[i]);
                break;
            case ')':
                if (operatorNormal.top() != '(')
                {
                    postfix += operatorNormal.top();
                    operatorNormal.pop();
                    i--;
                    continue;
                }
                else
                {
                    operatorNormal.pop();
                    continue;
                }

                break;
            }
        }
    }

    while (!operatorNormal.empty())
    {
        postfix += operatorNormal.top();
        operatorNormal.pop();
    }

    return postfix;
}

int main()
{
    string input = "a*(b+c)/d";
    cout << infixToPostfix(input) << endl;
}