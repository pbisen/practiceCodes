#include<iostream>

int updateBit(int n, int i, int k){
    switch (k)
    {
    case 0:
        //clear bit
        return n & ~(1 << i);
        break;
    case 1:
        //set bit
        return n | (1 <<i);
    
    default:
        break;
    }

}

using namespace std;

int main(){
    int n; cin >> n;

    int i; cin >> i;

    int value; cin>>value;

    n = updateBit(n, i, value);

    cout<<n<<endl;
}