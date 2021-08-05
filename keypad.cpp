#include<iostream>
#include<string>

using namespace std;


void keypad(string input, string gen){

    if(input.length() == 0){
        cout<<gen<<endl;
        return ;
    }

    

    for(int i = 0; i < input.length(); i++){
        keypad(input.substr(0,i) + input.substr(i+1, input.length()), gen+input[i]);
    }


}

int main(){

   string input;

   cin>>input;

   keypad(input, "");

}