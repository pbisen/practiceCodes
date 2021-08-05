#include <iostream>
#include<cmath>
using namespace std;

int main()
{

    int input, cubed = 0, temp;

    cout << "Enter Number: ";
    cin >> input;

    temp = input;

    while (temp > 0)
    {
        cubed = cubed + pow(temp%10, 3);
        temp = temp / 10;
    }

    if(input==cubed){
        cout<<"Armstrong"<<endl;
    }
    else{
        cout<<"Not Armstrong"<<endl;
    }
}