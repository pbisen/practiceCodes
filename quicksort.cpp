#include <iostream>

using namespace std;

void swap(int arr[], int i , int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;

}

int partition(int arr[], int l, int r)
{
    int pivot = arr[r];

    int i = l-1;

    // r-1 to avoid swapping the pivot

    for(int j = l; j < r; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr, i, j);
        }
    }

    swap(arr, i+1, r);

    return (i+1);

}

void quickSort(int arr[], int l, int r)
{

    if (l < r)
    {

        int parti = partition(arr, l, r);

        quickSort(arr, l, parti-1);
        quickSort(arr, parti+1, r);
    }
}

//driver code
int main()
{
    int array[5] = {5, 3, 2, 4, 1};

    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    quickSort(array, 0, 4);

    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << " ";
    }

    cout << endl;
}