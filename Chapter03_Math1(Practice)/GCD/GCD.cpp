#include <iostream>
using namespace std;

int GCD(int a, int b)
{
	if (b == 0)
		return a;

	return GCD(b, a % b);
}

int main()
{
	{
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);
	}
	
	long int t, n;
	long int num[101];

	long int sum;

	cin >> t;

	while (t--)
	{
		cin >> n;
		sum = 0;

		for (int i = 0; i < n; i++)
		{
			cin >> num[i];
		}

		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				sum += GCD(num[i], num[j]);
			}
		}

		cout << sum << '\n';
	}
}