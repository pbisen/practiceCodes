#include<iostream>

using namespace std;

bool sorted(int array[], int start, int end){

    if(start == end){
        return true;
    }

    if(array[start] <= array[start + 1]){
        return sorted(array, start+1, end);
    }
    else{
        return false;
    }
}



int main(){
    int n; cin >> n;

    int array[n];

    for(int i = 0; i < n; i++){
        cin>>array[i];
    }

    if(sorted(array, 0, n)){
        cout<<"Sorted"<<endl;
    }
    else{
        cout<<"Unsorted"<<endl;
    }

}