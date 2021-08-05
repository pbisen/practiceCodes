#include <iostream>

using namespace std;

int Merge(int arr[], int l, int mid, int r)
{
    int inv = 0;

    int n1 = mid - l + 1;
    int n2 = r - mid;
    int arr1[n1];
    int arr2[n2];

    for (int i = 0; i < n1; i++)
    {
        arr1[i] = arr[l + i];
    }

    for (int i = 0; i < n2; i++)
    {
        arr2[i] = arr[mid + i + 1];
    }

    int i = 0, j = 0, k = l;

    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            arr[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = arr2[j];
            j++;
            k++;
            inv += n1 - i;
        }
    }

    while (i < n1)
    {
        arr[k] = arr1[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = arr2[j];
        j++;
        k++;
    }

    return inv;
}

int mergeSort(int arr[], int l, int r)
{
    int val = 0;

    if (l < r)
    {

        int mid = (l + r) / 2;

        val += mergeSort(arr, l, mid);
        val +=mergeSort(arr, mid + 1, r);

        val += Merge(arr, l, mid, r);
    }

    return val;
}

//driver code
int main()
{
    int array[3] = {3,2,1};

    for (int i = 0; i < 3; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    cout<< mergeSort(array, 0, 3);

    cout << endl;
}