#include <iostream>
#include <climits>

using namespace std;

int arithmetic(int array[], int start, int end);

int main()
{
    int noTests;
    cin >> noTests;
    for (int k = 0; k < noTests; k++)
    {
        int n;
        cin >> n;

        int array[n];

        int maxVal = 2;

        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }

        int difference, count;

        difference = array[1] - array[0];
        count = 2;


        for (int i = 2; i < n; i++)
        {
            if(difference == array[i] - array[i-1]){
                count++;
            }
            else{
                difference = array[i] - array[i-1];
                count =2;
            }
            maxVal = max(count, maxVal);
            
        }

        cout <<"Case #"<<k+1<<": " <<maxVal << endl;
    }
}
