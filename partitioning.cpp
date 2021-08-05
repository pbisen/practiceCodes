#include <iostream>
#include <string>

using namespace std;

int COUNT = 0;

void partition(int target, int current, string currentV)
{



    if (target == current){
        COUNT++;
        cout<<currentV.substr(0, currentV.length() - 3)<<endl;
        return ;
        
    }

    for(int i = 1; i <= (target - current); i++){
        partition(target, current+i, currentV+to_string(i)+" + ");
        
    }
}

int main()
{
    int start;
    cin >> start;

    int end;
    cin >> end;

    partition(end - start, 0, "");

    cout<<"Total Number of Paths: "<<COUNT<<endl;
}