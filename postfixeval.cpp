#include<iostream>
#include<stack>
#include<cmath>

using namespace std;

int postEval(string input){

    stack<int> numbers;

    int n = input.length();

    string numero;

    for(int i = 0;i < n; i++){
        numero = "";

        if(input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/' || input[i] == '^'){
            int operand2 = numbers.top();
            numbers.pop();
            int operand1 = numbers.top();
            numbers.pop();

            switch (input[i])
            {
            case '+':
                numbers.push(operand1+operand2);
                i++;
                continue;
                break;

            case '-':
                numbers.push(operand1-operand2);
                i++;
                continue;
                break;

            case '*':
                numbers.push(operand1*operand2);
                i++;
                continue;
                break;

            case '/':
                numbers.push(operand1/operand2);
                i++;
                continue;
                break;
            case '^':
                numbers.push(pow(operand1,operand2));
                i++;
                continue;
                break;
            
            default:
            continue;
                break;
            }
        }

        while(input[i] != ' '){
            numero += input[i];
            i++;
        }

        numbers.push(stoi(numero));
    }


    return numbers.top();

}


int main(){

    cout<<postEval("10 2 3 ^ ^")<<endl;

}