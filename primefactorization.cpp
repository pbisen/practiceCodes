#include<iostream>

using namespace std;

void prime_eratosthenes (int n){
    int marked[n+1];

    for(int i = 0; i < n+1; i++){
        marked[i] = i;
    }

    for(int i = 2; i <= n; i++){
        if(marked[i] == i){
            for(int j = i*i; j <= n; j=j+i){
                if(marked[j] == j){
                    marked[j] = i;
                }
                
            }
        }
    }

    

    while(n!=1){
        cout<<marked[n]<<" ";
        n = n/marked[n];
    }

    cout<<endl;

}


int main(){
    int n;

    cin >> n;

    prime_eratosthenes(n);

}