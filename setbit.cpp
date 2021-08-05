#include<iostream>

int setBit(int n, int i){
    return n | 1 << i;

}

using namespace std;

int main(){
    int n; cin >> n;

    int i; cin >> i;

    n = setBit(n, i);

    cout<<n<<endl;
}
