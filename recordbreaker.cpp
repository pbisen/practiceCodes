#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int noTests;
    cin >> noTests;
    for (int k = 0; k < noTests; k++)
    {
        int n;
        cin >> n;

        int array[n];

        int maxVal = INT_MIN;
        int count = 0;

        

        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        
        }

        if(n == 1){
            cout <<"Case #"<<k+1<<": " <<"1" << endl;
            return 0;
        }

        for(int i = 0; i < n; i++){
            if(array[i]>maxVal){
                if (i!=n-1 && array[i]>array[i+1]){
                    maxVal = array[i];
                    count++;

                }
                else if(i == n-1 && array[i]>array[i-1]){
                    maxVal = array[i];
                    count++;
                }
            }
        }

        
        cout <<"Case #"<<k+1<<": " <<count << endl;
    }
}
