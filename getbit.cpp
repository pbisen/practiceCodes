#include<iostream>

int getBit(int n, int i){
    return((n & (1<<i))!= 0);
    //!= 0 will return 1 when not equal to 0

}

using namespace std;

int main(){
    int n; cin >> n;

    int i; cin >> i;

    cout<<getBit(n, i)<<endl;
}
