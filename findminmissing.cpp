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
    int minVal = 0;

    for (int i = 0; i < n; i++)
    {
        maxVal = max(array[i], maxVal);
    }

    bool attend[maxVal + 1];

    for (int i = 0; i < maxVal + 1; i++)
    {
        attend[i] = false;
    }

    for (int i = 0; i < n; i++)
    {
        if (array[i] > 0)
        {
            attend[array[i]] = true;
        }
    }

    for (int i = 1; i < maxVal+1; i++)
    {
        if (attend[i] == false)
        {
            minVal = i;
            break;
        }
    }

    cout << minVal << endl;
}