#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n;

    cout << "Enter Number of Elements in the Array: ";
    cin >> n;

    int array[n];

    int arrayMin, arrayMax;

    arrayMin = INT_MAX;
    arrayMax = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < n; i++)
    {
        arrayMax = max(arrayMax, array[i]);
        arrayMin = min(arrayMin, array[i]);
    }

    cout << arrayMax << " " << arrayMin << endl;
}
