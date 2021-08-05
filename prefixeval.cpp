#include <iostream>
#include <stack>
#include <cmath>

using namespace std;

int preEval(string input)
{

    

    stack<int> numbers;
    stack<char> operators;

    int n = input.length();


    string numero;

    for(int i = n-1;i >=0 ; i--){
        numero = "";

        if(input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/' || input[i] == '^'){
            int operand1 = numbers.top();
            numbers.pop();
            int operand2 = numbers.top();
            numbers.pop();

            switch (input[i])
            {
            case '+':
                numbers.push(operand1+operand2);
                i--;
                continue;
                break;

            case '-':
                numbers.push(operand1-operand2);
                i--;
                continue;
                break;

            case '*':
                numbers.push(operand1*operand2);
                i--;
                continue;
                break;

            case '/':
                numbers.push(operand1/operand2);
                i--;
                continue;
                break;
            case '^':
                numbers.push(pow(operand1,operand2));
                i--;
                continue;
                break;
            
            default:
            continue;
                break;
            }
        }

        while(input[i] != ' '){
            numero += input[i];
            i--;
        }


        int n2 = numero.length();

        for(int k = 0; k < n2/2; k++){
            swap(numero[k], numero[n2-k-1]);
        }


        numbers.push(stoi(numero));
    }


    return numbers.top();
}

int main()
{

    cout << preEval("* + 10 2 3") << endl;
}