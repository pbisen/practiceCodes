
#include <iostream>
using namespace std;
int gcd(int a, int b)
{
	// Everything divides 0
	if (a == 0)
	return b;
	if (b == 0)
	return a;

	// base case
	if (a == b)
		return a;

	// a is greater
	if (a > b)
		return gcd(a-b, b);
	return gcd(a, b-a);
}

// Driver program to test above function
int main()
{
	int testCases;
	cin >> testCases;
    int arr[testCases][2];

    for(int i = 0; i < testCases; i++){
	    cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
	}
}
