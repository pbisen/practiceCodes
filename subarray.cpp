#include<iostream>

using namespace std;

void sub(int array[], int start, int end);

int main(){
    int n;
    cin>>n;

    int array[n];


    for(int i = 0; i < n; i++){
        cin>>array[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            sub(array, i, j);
        }
    }

    
}

void sub(int array[], int start, int end){
    int sum = 0;
    cout<<"[ ";
    for(int i = start; i <= end; i++){
        cout<<array[i]<<", ";
        sum += array[i];
    }
    cout<<"]\t";
    cout<<"Sum: "<<sum<<endl;
}