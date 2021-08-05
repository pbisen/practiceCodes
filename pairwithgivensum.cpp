#include<iostream>
#include<unordered_map>

using namespace std;

int main(){
    int arr1[] = {8,3,7};
    int n = (sizeof(arr1))/sizeof(int);
    unordered_map<int,int> map1;

    int targetSum = 15;
    int sizeMax = -1;

    for(int i = 1; i < n; i++){
        arr1[i] = arr1[i] + arr1[i-1];
    }

    for(int i = 0; i < n; i++){
        if(map1.count(arr1[i] - targetSum) != 0){
            sizeMax = max(i - ((map1.find(arr1[i] - targetSum))->second), sizeMax);
            map1.insert({arr1[i],i});
        }
        else if(targetSum == arr1[i]){
            sizeMax = max(sizeMax, i+1);
            map1.insert({arr1[i],i});
        }
        else{
            map1.insert({arr1[i],i});
        }
    }

    cout<<sizeMax<<"\n";
}