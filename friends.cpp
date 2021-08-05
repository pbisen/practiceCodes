#include <iostream>
#include <string>

using namespace std;


int partition(int targetX, int currentX)
{
    if(currentX > targetX){
        return 0;
    }

    if(currentX == targetX){
        return 1;
    }

    return partition(targetX, currentX+1) + (targetX - currentX - 1)*partition(targetX, currentX+2);
    
}

int main()
{
    int n; cin >> n;

    cout<<"Total Number of ways: "<<partition(n, 0)<<endl;
}