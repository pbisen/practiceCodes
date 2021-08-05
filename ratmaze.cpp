#include <iostream>

using namespace std;

bool isAllowed(int **input, int x, int y)
{
    if (input[x][y] == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

bool ratMaze(int **input, int **output, int x, int y, int n)
{
    if (x == n - 1 && y == n - 1)
    {
        output[n - 1][n - 1] = 1;
        return true;
    }

    if (isAllowed(input, x, y + 1))
    {
        if (ratMaze(input, output, x, y + 1, n))
        {
            output[x][y + 1] = 1;
            return true;
        }
    }

    if (isAllowed(input, x + 1, y))
    {
        if (ratMaze(input, output, x + 1, y, n))
        {
            output[x + 1][y] = 1;
            return true;
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
            cin >> input[i][j];
        }
    }

    int **output = new int *[n];

    for (int i = 0; i < n; i++)
    {
        output[i] = new int[n];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            output[i][j] = 0;
        }
    }

    ratMaze(input, output, 0, 0, n);

    output[0][0] = 1;

    cout<<"Path: "<<endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << output[i][j] << " ";
        }
        cout << endl;
    }
}