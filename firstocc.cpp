#include<iostream>

using namespace std;

int firstOcc(int array[], int start, int end, int key){

    if(start == end){
        return -1;
    }

    if(array[start] == key){
        return start;
    }
    else{
        return firstOcc(array, start+1, end, key);
    }

    
}



int main(){
    int n; cin >> n;

    int array[n];

    for(int i = 0; i < n; i++){
        cin>>array[i];
    }

    int key; cin >> key;

    int index = firstOcc(array, 0, n, key);

    if(index==-1){
        cout<<"Not Found"<<endl;
    }
    else{
        cout<<"First Occ: "<<index<<endl;
    }

    

}