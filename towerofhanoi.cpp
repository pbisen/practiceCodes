#include<iostream>

using namespace std;

void hanoi(int n, char source, char destination, char helper){
    if(n == 0){
        return ;
    }

    hanoi(n-1, source, helper, destination);
    cout<<source<<"->"<<destination<<endl;
    hanoi(n-1, helper, destination, source);
}

int main(){
    int n; cin >> n;

    hanoi(n, 'A', 'C', 'B');
}