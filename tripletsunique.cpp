#include <iostream>
#include<cmath>

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

    int size = sizeof(int) * 4;

    int count[size];

    for(int i = 0; i < size; i++){
        count[i] = 0;
    }

    int temp;
    int index = 0;

    for(int i = 0; i < n; i++){
        temp = array[i];

        while(temp){
            if(temp & 1){
                count[index]++;
            }
            temp = temp >> 1;
            index++;
        }

        index = 0;
    }

    int num = 0;

    for(int i = 0; i < size; i++){
        if(count[i] % 3){
            num = num + pow(2, i);
        }
    }

    cout<<num<<endl;

}