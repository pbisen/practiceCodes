#include<iostream>

using namespace std;

void eratosthenes (int n){
    bool marked[n+1] = {false};
    cout<<n<<endl;
    for(int i = 2; i <= n; i++){
        if(marked[i] == false){
            for(int j = i*i; j <= n; j=j+i){
                marked[j] = true;
            }
        }
    }

    for(int i = 2; i < n; i++){
        if(marked[i] == false){
            cout<<i<<" ";
        }  
    }

    cout<<endl;

}


int main(){
    int n;

    cin >> n;

    eratosthenes(n);

}