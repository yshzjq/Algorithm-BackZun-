#include <iostream>
#define mod 1000000000

using namespace std;

int A[201][201];

int N, K;

int main()
{

	A[0][0] = 1LL;

	cin >> N >> K;

	for (int i = 1; i <= K; i++)
	{
		for (int j = 0; j <= N; j++)
		{
			for (int l = 0; l <= j; l++)
			{
				A[i][j] += A[i - 1][j - l];
				A[i][j] %= mod;
			}
		}
	}

	cout << A[K][N];
}

