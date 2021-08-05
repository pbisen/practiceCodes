#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int start[n];

    int swap;

    for(int i = 0; i < n; i++){
        cin >> start[i];
    }

    int finish[n];

    for(int i = 0; i < n; i++){
        cin >> finish[i];
    }
    //selection sort

    for(int i = 0; i < n - 1; i++){
        for(int j = i; j < n; j++){
            if(finish[i]> finish[j]){
                swap = finish[i];
                finish[i] = finish[j];
                finish[j] = swap;

                swap = start[i];
                start[j] = start[i];
                start[i] = swap;

            }
        }
    }

    int count = 1;

    int currentEnd = finish[0];


    for(int i = 1; i < n; i++){
        if(start[i] > currentEnd){
            count++;
            currentEnd = finish[i];
        }
    }

    cout<<count<<endl;





}