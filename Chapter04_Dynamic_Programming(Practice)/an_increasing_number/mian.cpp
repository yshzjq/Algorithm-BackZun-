#include <iostream>
#define mod 10007

using namespace std;

int A[1001][10];

int main()
{
	int N;

	cin >> N;

	for (int i = 0; i <= 9;i++)
	{
		A[1][i] = 1;
	}

	for (int i = 2;i <= N;i++)
	{
		for (int j = 0;j <= 9;j++)
		{
			for (int k = 0;k <= j;k++)
			{
				A[i][j] += A[i - 1][k];
				A[i][j] %= mod;
			}
		}
	}

	long long ans = 0;

	for (int i = 0;i <= 9;i++)
	{
		ans += A[N][i];
		ans %= mod;
	}

	cout << ans;
}