#include <iostream>

using namespace std;


const long long mod = 1000000009LL;

long long A[1000001];

int main()
{
	A[0] = 1;

	for (int i = 1; i <= 1000000; i++)
	{
		if (i >= 3)
		{
			A[i] += A[i - 3];
		}

		if (i >= 2)
		{
			A[i] += A[i - 2];
		}

		if (i >= 1)
		{
			A[i] += A[i - 1];
		}

		A[i] %= mod;
	}

	int T;

	cin >> T;

	while (T--)
	{
		int n;

		cin >> n;

		cout << A[n] << '\n';
	}


	return 0;
}