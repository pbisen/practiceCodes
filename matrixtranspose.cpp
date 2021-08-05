#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    if(n != m){
        cout<<"Dimensions should be same for transpose. "<<endl;
        return 1;
    }

    int array[n][m];
    int temp;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> array[i][j];
        }
    }

    //Prints out the input

    cout<<"Input: "<<endl;

    for(int i = 0; i < n; i++){
        cout<<"|";
        for(int j = 0; j < m; j++){
            cout<<" "<<array[i][j]<<" |";
        }
        cout<<endl;
    }

    cout<<endl;

    //Transpose

    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            temp=array[i][j];
            array[i][j] = array[j][i];
            array[j][i] = temp;
            temp = 0;

        }
    }

    //Output

    cout<<"Output: "<<endl;

    for(int i = 0; i < n; i++){
        cout<<"|";
        for(int j = 0; j < m; j++){
            cout<<" "<<array[i][j]<<" |";
        }
        cout<<endl;
    }


} 


