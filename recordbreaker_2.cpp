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

        int maxVal = -1;
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }

        if (n == 1)
        {
            count = 1;
        }
        else
        {
            for (int i = 0; i < n-1; i++)
            {
                if (array[i] > maxVal)
                {
                    maxVal = array[i];
                    if(array[i] > array[i + 1]){
                        count++;
                    }
                    
                }
            }

            if(array[n-1] > maxVal){
                maxVal = array[n];
                count++;
            }
        }

        cout << "Case #" << k + 1 << ": " << count << endl;
    }
}
