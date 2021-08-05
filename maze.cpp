#include <iostream>
#include <string>

using namespace std;


int partition(int targetX, int currentX, int targetY, int currentY)
{
    if(currentX > targetX || currentY > targetY){
        return 0;
    }

    if(currentX == targetX && currentY == targetY){
        return 1;
    }

    return partition(targetX, currentX+1, targetY, currentY) + partition(targetX, currentX, targetY, currentY+1);
    
}

int main()
{
    int x; cin>>x;
    int y; cin>>y;

    cout<<"Total Number of Paths: "<<partition(x, 1, y,1)<<endl;
}