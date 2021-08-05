#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){

    string input;

    getline(cin, input);

    transform(input.begin(), input.end(), input.begin(), ::toupper);

    cout<<input<<endl;

}