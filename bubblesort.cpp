#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    int array[n];
    int swap;

    for(int i = 0; i < n; i++){
        cin>>array[i];
    }

    for(int i = 1; i < n; i++){
        for(int j = 0; j < n - i; j++){
            if(array[j]>array[j+1]){
                swap = array[j];
                array[j] = array[j+1];
                array[j+1] = swap;
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout<<array[i]<<endl;
    }


}