#include<iostream>

using namespace std;

void  countSort(int arr[], int n){

    int maxEle = arr[0];

    for(int i = 0; i < n;i++){
        maxEle = max(arr[i], maxEle);
    }

    int freq[maxEle+1] = {0};

    for(int i = 0; i < n; i++){
        freq[arr[i]]++;
    }

    for(int i = 1; i < maxEle+1; i++){
        freq[i] += freq[i-1];
    }

    int output[n] = {0};

    for(int i = 0; i < n; i++){

        output[--freq[arr[i]]] = arr[i];

    }

    for(int i = 0; i < n; i++){
        arr[i] = output[i];
    }



}   

int main(){

    int input[9] = {1,3,2,4,4,1,6,4,3};
    countSort(input, 9);

    for(int i = 0; i  < 9; i++){
        cout<<input[i]<<" ";
    }   
    cout<<endl;

}