#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int maxVal = INT_MIN;
    int minIndex = INT_MAX;

    for(int i = 0; i < n; i++){
        maxVal = max(array[i], maxVal);
    }

    int count[maxVal+1];

    for (int i = 0; i < maxVal+1; i++)
    {
        count[i] = -1;
    }

    for(int i = 0; i < n; i++){
        if(count[array[i]] == -1){
            count[array[i]] = i;
        }else{
            minIndex = min(minIndex, count[array[i]]);
        }
    }

    cout<<minIndex<<endl;


}