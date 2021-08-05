#include<iostream>
#include<string>

using namespace std;

string nodup(string input, int index){
    if(index == input.length() - 1){
        return input;
    }

    if(input[index] == input[index+1]){
        input.erase(index,1);
        return nodup(input, index);
    }
    else{
        index++;
        return nodup(input, index);
    }

}

int main(){
    string input;
    cin>>input;

    cout<<nodup(input, 0)<<endl;

    
}