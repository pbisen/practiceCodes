#include<iostream>

using namespace std;

int lastOcc(int array[], int start, int end, int key){

    if(start == end){
        return -1;
    }

    int val = lastOcc(array, start+1, end, key);

    if(val == -1){
        if(array[start] == key){
            return start;
        }
        else{
            return -1;
        }
    }
    else{
        return val;
    }

    
}



int main(){
    int n; cin >> n;

    int array[n];

    for(int i = 0; i < n; i++){
        cin>>array[i];
    }

    int key; cin >> key;

    int index = lastOcc(array, 0, n, key);

    if(index==-1){
        cout<<"Not Found"<<endl;
    }
    else{
        cout<<"Last Occ: "<<index<<endl;
    }

    

}