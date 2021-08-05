#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    char array[n + 1];

    cin.getline(array, n);

    int lastSpace = 0;
    int maxlen = INT_MIN;

    int start, end;

    for (int i = 0; i <= n; i++)
    {
        if (array[i] == ' ' || array[i] == '\0')
        {
            if (maxlen < i - lastSpace)
            {
                maxlen = i - lastSpace - 1;
                start = lastSpace;
                end = i;
                
            }
            lastSpace = i;
        }
    }

    for(int i = start+1; i <= end; i++){
        cout<<array[i];
    } 

    cout<<endl;  

    cout << maxlen << endl;
}

