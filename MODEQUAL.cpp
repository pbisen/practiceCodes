#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
#include <climits>
#include <deque>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int m, n;

	cin >> m;

	vector<vector<long long int>> arr;

	for (int i = 0; i < m; i++)
	{
		vector<long long int> v;
		cin >> n;
		for (int j = 0; j < n; j++)
		{
			long long int temp;
			cin >> temp;
			v.push_back(temp);
		}

		arr.push_back(v);
	}

	long long int arrMin[m];
	fill_n(arrMin, m, INT_MAX);
	bool foundRange[m] = {0};
	int minCount[m] = {0};

	for (int i = 0; i < m; i++)
	{
		int len = arr[i].size();
		for (int j = 0; j < len; j++)
		{
			arrMin[i] = min(arrMin[i], arr[i][j]);
		}

		for (int j = 0; j < len; j++)
		{
			if (arr[i][j] > arrMin[i] && arr[i][j] <= 2 * arrMin[i])
			{
				foundRange[i] = true;
				break;
			}
		}

		if (foundRange[i] == false)
		{
			int lenArr = arr[i].size();
			for (int j = 0; j < lenArr; j++)
			{
				if (arr[i][j] == arrMin[i])
				{
					minCount[i]++;
				}
			}
		}
	}

	for (int i = 0; i < m; i++)
	{
		if (foundRange[i])
		{
			cout << arr[i].size() << "\n";
		}
		else
		{
			cout << arr[i].size() - minCount[i] << "\n";
		}
	}

	return 0;
}