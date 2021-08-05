#include<iostream>

using namespace std;

int binarysearch(int array[], int n, int key);

int main(){
    int n;
    cin>>n;

    int array[n];

    for(int i = 0; i < n; i++){
        cin>>array[i];
    }

    int key;
    cin>>key;

    int index;

    index = binarysearch(array, n, key);

    cout<<index<<endl;

}

int binarysearch(int array[], int n, int key){
    int s = 0;
    int e = n;
    int mid;

    while(s<=e){
        mid = (s+e)/2;
        if(array[mid]>key){
            e = mid - 1;
        }
        else if(array[mid]< key){
            s = mid + 1;
        }
        else{
            s = mid;
            return s;
        }
    }

    return -1;

}