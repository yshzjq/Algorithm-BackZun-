#include <iostream>

using namespace std;

int A[501][501];
int V[501][501];

int main()
{
	int n;

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cin >> A[i][j];
		}
	}

	V[1][1] = A[1][1];


	for (int i = 2; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			int tmp1 = V[i-1][j] + A[i][j];
			int tmp2 = V[i-1][j] + A[i][j+1];

			if (V[i][j] < tmp1)
			{
				V[i][j] = tmp1;
			}

			if (V[i][j+1] < tmp2)
			{
				V[i][j+1] = tmp2;
			}
		}
	}

	int ans = 0;

	for (int i = 1; i <= n; i++)
	{
		if (V[n][i] > ans) ans = V[n][i];
	}

	cout << ans << '\n';
}