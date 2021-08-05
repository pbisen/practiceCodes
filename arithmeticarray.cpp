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

        int maxVal = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                maxVal = max(arithmetic(array, i, j), maxVal);
            }
        }

        cout <<"Case #"<<k+1<<": " <<maxVal << endl;
    }
}

int arithmetic(int array[], int start, int end)
{
    if (start == end)
    {
        return INT_MIN;
    }
    int diff;
    int length = 0;
    diff = array[start] - array[start + 1];

    for (int i = start; i < end; i++)
    {
        if (array[i] - array[i + 1] != diff)
        {
            return INT_MIN;
        }
        else
        {
            length++;
        }
    }

    return length + 1;
}