#include<iostream>


using namespace std;

int main(){

	int input, reverse = 0;
	
	cout<<"Enter Number: ";
	cin>>input;

    while(input>0){
        reverse = reverse*10 + input%10;
        input = input/10;
    }

    cout<<"Reversed: "<<reverse<<endl;


}