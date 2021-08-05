#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;


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

    int key;
    cin>>key;

    bool found = false;
    int i = 0 , j = m-1;

    while(i < n && j >=0)

            if(array[i][j] == key){
                found = true;
                cout<<i<<" "<<j<<endl;
                break;
            }
            else if(array[i][j] > key){
                j--;
            }
            else{
                i++;
            }


    //Output

    if(found == true){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }

    


} 


