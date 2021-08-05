#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int array[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> array[i][j];
        }
    }

    int row_top = 0, col_right = m-1, row_bottom = n-1, col_left =  0;

    while(row_top<=row_bottom && col_left <= col_right){
        for(int i = col_left; i <= col_right; i++){
            cout<<array[row_top][i]<<" ";
        }
        row_top++;
        for(int i = row_top; i <= row_bottom; i++){
            cout<<array[i][col_right]<<" ";
        }
        col_right--;

        for(int i = col_right; i >= col_left; i--){
            cout<<array[row_bottom][i]<<" ";
        }
        row_bottom--;
        for(int i = row_bottom; i >= row_top; i--){
            cout<<array[i][col_left]<<" ";
        }
        col_left++;
        

    }

    cout<<endl;

}   