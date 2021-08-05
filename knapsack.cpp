#include <iostream>

using namespace std;

int knapsack(int weights[], int values[], int weightLimit, int count, int value)
{

    if (weightLimit - weights[count - 1] < 0 )
    {
        return value;
    }

    return (max(knapsack(weights, values, weightLimit, count - 1, value), knapsack(weights, values, weightLimit - weights[count], count - 1, value + values[count])));
}

int main()
{
    int weights[] = {10, 20, 30};
    int value[] = {100, 50, 150};

    int n = sizeof(weights) / sizeof(int);

    int weight;
    cin >> weight;

    cout << knapsack(weights, value, weight, n, 0)<<endl;
}