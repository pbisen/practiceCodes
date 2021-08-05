#include<iostream>

int clearBit(int n, int i){
    return n & ~(1 << i);

}

using namespace std;

int main(){
    int n; cin >> n;

    int i; cin >> i;

    n = clearBit(n, i);

    cout<<n<<endl;
}
