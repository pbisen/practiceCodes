#include<iostream>
#include<unordered_set>
using namespace std;

int longSubsec(int arr[], int n){
    unordered_set<int> set(arr, arr+n);

    int maxCount = 1;
    for(auto it : set){
        if(set.count(it-1) == 0){
            int count = 1;
            int temp = it;
            temp++;
            while(set.count(temp) == 1){
                count++;
            }
        }
    }
}


int main(){

}
