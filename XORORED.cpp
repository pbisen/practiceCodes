#include <iostream>
#include<limits.h>
using namespace std;

int main() {
	int testCases;
	cin >> testCases;
	int length;
    cin >> length;
    int arr[testCases][length];
    int maxNo[testCases] = {0};
    int minNo[testCases] = {INT_MAX};
    int output[testCases][2];

    for(int i = 0; i < testCases; i++){
        for(int j = 0; j < length; j++){
            cin >> arr[i][j];
            maxNo[i] = max(maxNo[i], arr[i][j]);
            minNo[i] = min(minNo[i], arr[i][j]);
         }
    }


    for(int i = 0; i < testCases; i++){
        output[i][1] = INT_MAX; 
        for(int j = minNo[i]; j <= maxNo[i]; j++){
            int sum = 0;

            for(int k = 0; k < length; k++){
                sum = sum | (arr[i][k] ^ j);
            }

            if(sum <= output[i][1]){
                output[i][0] = j;
                output[i][1] = sum;
            }



        }
    }

    for(int i = 0; i < testCases; i++){
        cout<<output[i][0]<<" "<<output[i][1]<<endl;
    }

}
