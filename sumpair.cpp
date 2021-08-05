#include<iostream>

using namespace std;

bool pairSum(int array[], int n, int k);
void insertionSort(int array[], int n);

int main(){
    int n;

    cin>>n;

    int array[n];

    for(int i = 0; i <n; i++){
        cin>>array[i];
    }

    int targetSum;

    cin>>targetSum;

    insertionSort(array, n);



    cout<<pairSum(array, n ,targetSum)<<endl;


}

void insertionSort(int array[], int n){
    int current,j;
    for (int i = 1; i < n; i++)
    {
        current = array[i];
        j = i - 1;
        while (array[j] > current && j >= 0)
        {
            array[j + 1] = array[j];
            j--;
        }

        array[j + 1] = current;
    }
}


bool pairSum(int array[], int n, int targetSum){
    int start, end;

    start = 0;
    end = n-1;

    while(start < end){
        if(array[start] + array[end] == targetSum){
            cout<<start<<"\t"<<end<<endl;
            return true;
        }
        else if(array[start] + array[end] < targetSum){
            start++;
        }
        else{
            end--;
        }
    }

    return false;
}