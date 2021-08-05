#include<iostream>
#include<unordered_map>

using namespace std;

int commonspan(int* arr1, int* arr2, int size1){
    int arrdiff[size1] = {0};

    for(int i = 0; i < size1; i++){
        arrdiff[i] = arr1[i]-arr2[i];
    }

    unordered_map<int,int> map;

    int prefixSum = 0;
    int maxSize = -1;

    for(int i = 0; i < size1; i++){
        prefixSum += arrdiff[i];
        if(map.count(prefixSum) != 0){
            maxSize = max(maxSize, i - map[prefixSum]);
        }
        else if(prefixSum == 0){
            maxSize = max(maxSize, i+1);
        }
        else{
            
        }
    }


}

int main(){
    int arr1[] = {0,1,0,0,0,0};
    int arr2[] = {1,0,1,0,0,1};

    int size1 = sizeof(arr1)/sizeof(int);
}