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

    int kadaneSum[n];
    int maxSum = INT_MIN;
    int currKadeneSum = 0;

    for (int i = 0; i < n; i++)
    {
        currKadeneSum = currKadeneSum + array[i];
        if (currKadeneSum < 0)
        {
            kadaneSum[i] = 0;
            currKadeneSum = 0;
        }
        else
        {
            kadaneSum[i] = currKadeneSum;
        }

        maxSum = max(maxSum, currKadeneSum);


    }



    cout<<"Maximum Sum: "<<maxSum<<endl;

    int start, end;

    for(int i = 0; i < n; i++){
        if(kadaneSum[i] == maxSum){
            end = i;
        }
    }

    for(int i = end; i >= 0; i--){
        if(kadaneSum[i] == 0){
            start = i;
            break;
        }
    }

    cout<<"Start: "<<start<<"\t"<<"End: "<<end<<endl;

    
}