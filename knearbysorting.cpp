#include<iostream>
using namespace std;

int main(){
    int n,k,temp, currmin, minposn;

    cout<<"Enter N and K"<<endl;
    cin>>n>>k;

    int arr[n];

    for(int i = 0; i < n; i++){
        cout<<"Enter "<<i+1<<" Position Element: ";
        cin>>temp;
        arr[i] = temp;
    }

    

    for(int i = 0; i < n; i++){
        currmin = arr[i];
        for(int j = i; j < i+k && j < n; j++){
            if(currmin>=arr[j]){
                currmin = arr[j];
                minposn = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[minposn];
        arr[minposn] = temp;


    }

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
