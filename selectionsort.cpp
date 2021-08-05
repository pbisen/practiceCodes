#include<iostream>

using namespace std;

int binarysearch(int array[], int n, int key);

int main(){
    int n;
    cin>>n;

    int array[n];
    int swap;

    for(int i = 0; i < n; i++){
        cin>>array[i];
    }

    for(int i = 0; i < n - 1; i++){
        for(int j = i; j < n; j++){
            if(array[i]> array[j]){
                swap = array[i];
                array[i] = array[j];
                array[j] = swap;

            }
        }
    }

    for(int i = 0; i < n; i++){
        cout<<array[i]<<endl;
    }


}