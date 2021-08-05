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

    int targetSum;

    cin >> targetSum;

    int start = 0;
    int end = 0;
    bool found = false;
    int sum = array[0];

    while (start < n && end < n)
    {
        if (sum < targetSum)
        {
            end++;
            sum = sum + array[end];
        }
        else if (sum > targetSum)
        {
            sum = sum - array[start];
            start++;
        }
        else
        {
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Not Found" << endl;
        return 0;
    }

    cout << "Start: " << start << "\t" << "End: " << end << endl;
}