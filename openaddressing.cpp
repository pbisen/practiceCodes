#include<iostream>

using namespace std;

struct MyHash{
    int *arr;
    int size,cap;

    MyHash(int k){
        arr = new int[k];
        size = 0;
        cap = k;

        for(int i = 0; i < k; i++){
            arr[k] = -1;
        }
    }

    int hash(int key){
        return key % cap;
    }

    bool search(int key){
        int hashVal = hash(key);
        int i = hashVal;

        while(arr[i] != -1){
            if(arr[i] = key){
                return true;
            }
            else{
                i = (i+1) % cap;
            }

            if(i == hashVal){
                return false;
            }
        }

        return false;
    }

    bool insert(int key){
        int hashVal = hash(key);
        int i = hashVal;

        if(size == cap){
            return false;
        }

        while (arr[i] != -1 && arr[i] != -2  && arr[i] != key)
        {
            i = (i+1)%cap;
        }

        if(arr[i] == key){
            return false;
        }
        else{
            arr[i] = key;
            size++;
            return true;
        }
        
    }

    bool erase(int key){
        if(size == 0){
            return false;
        }

        int hashVal = hash(key);
        int i = hashVal;

        while(arr[i] != key && arr[i] != -1){
            i = (i+1)  % cap;
            if(i == hashVal){
                return false;
            }
        }

        arr[i] = -2;
        size--;

        return true;
    }


};

int main(){

}