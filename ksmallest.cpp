#include <iostream>

using namespace std;

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[], int l, int r)
{
    int x = arr[r], i = l;
    for (int j = l; j <= r - 1; j++)
    {
        if (arr[j] <= x)
        {
            swap(arr, i , j);
            i++;
        }
    }
    swap(arr, i, r);
    return i;
}

int ksmallest(int arr[], int l, int r, int k)
{
    if (k > 0 && k <= r - l + 1)
    {

        int parti = partition(arr, l, r);

        if (parti - l == k - 1)
        {
            return arr[parti];
        }
        if (parti - l > k - 1)
        {
            return (ksmallest(arr,l, parti - 1, k));
        }
        return (ksmallest(arr, parti+1, r, k-parti-1+l));
    }

    return -1;
}

int main()
{
    int arr[] = {1, 7, 6, 2, 88, 23, 14, 3, 52, 15, 4};

    cout << ksmallest(arr, 0, 10, 8) << endl;
}