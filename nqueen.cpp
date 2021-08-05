#include <iostream>

using namespace std;

bool isSafe(int **input, int row, int col, int n)
{
    for (int i = 0; i < row; i++)
    {
        if (input[i][col] == 1)
        {
            return false;
        }
    }

    int i = row;
    int j = col;

    while (i >= 0 && j >= 0)
    {
        if (input[i][j] == 1)
        {
            return false;
        }
        i--;
        j--;
    }

    i = row;
    j = col;

    while (i >= 0 && j < n)
    {
        if (input[i][j] == 1)
        {
            return false;
        }
        i--;
        j++;
    }

    return true;
}

bool queen(int **input, int row, int n)
{
    if (row >= n)
    {
        return true;
    }

    for (int i = 0; i < n; i++)
    {
        if (isSafe(input, row, i, n))
        {
            input[row][i] = 1;
            if (queen(input, row + 1, n))
            {
                return true;
            }
            input[row][i] = 0;
        }
    }

    return false;
}

int main()
{
    int n;
    cin >> n;

    int **input = new int *[n];

    for (int i = 0; i < n; i++)
    {
        input[i] = new int[n];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            input[i][j] = 0;
        }
    }

    if (queen(input, 0, n))
    {
        cout << "Found: " << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << input[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Not Found" << endl;
    }
}