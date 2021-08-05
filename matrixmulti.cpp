#include <iostream>

using namespace std;

int main()
{
    int r1, c1, r2,c2;
    cout<<"Enter Dimensions of first matrix: ";
    cin >> r1 >> c1;

    cout<<"Enter Dimensions of Second Matrix: ";
    cin>>r2>>c2;

    if(c1 != r2){
        cout<<"Incompatible"<<endl;
        return 1;
    }


    cout<<"Enter first Matrix: "<<endl;
    int array1[r1][c1];

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> array1[i][j];
        }
    }



    //Prints out the input

    cout<<"First Input: "<<endl;

    for(int i = 0; i < r1; i++){
        cout<<"|";
        for(int j = 0; j < c1; j++){
            cout<<" "<<array1[i][j]<<" |";
        }
        cout<<endl;
    }

    cout<<endl;

    cout<<"Enter Second Array"<<endl;

    int array2[r2][c2];

    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> array2[i][j];
        }
    }



    //Prints out the input

    cout<<"Second Input: "<<endl;

    for(int i = 0; i < r1; i++){
        cout<<"|";
        for(int j = 0; j < c1; j++){
            cout<<" "<<array2[i][j]<<" |";
        }
        cout<<endl;
    }

    cout<<endl;


    int result[r1][c2];
    int sum;

    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c2; j++){
            result[i][j] = 0;
            for(int k = 0; k < c1; k++){
                result[i][j] += array1[i][k] * array2[k][j];
            }

        }
    }

    cout<<"Output : "<<endl;

    for(int i = 0; i < r1; i++){
        cout<<"|";
        for(int j = 0; j < c2; j++){
            cout<<" "<<result[i][j]<<" |";
        }
        cout<<endl;
    }

    cout<<endl;



} 


