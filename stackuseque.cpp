#include<iostream>
#include<queue>

using namespace std;

int popStack(queue<int> qu){
    queue<int> temp;
    while (qu.size() > 1)
    {
        temp.push(qu.front());
        qu.pop();
    }

    qu.pop();

    while(temp.empty() == false){
        qu.push(temp.front());
        temp.pop();
    }
    

}

int main(){
    queue<int> qu;
    

}