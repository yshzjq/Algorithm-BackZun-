#include <iostream>

using namespace std;

int A[100001];
int D[100001];

int main()
{
	int n;

	cin >> n;

	

	for (int i = 1; i <= n; i++)
	{
		cin >> A[i];
	}

	int max = A[1];

	for (int i = 1; i <= n; ++i)
	{
		D[i] = D[i-1] + A[i];

		if (D[i] < A[i])
		{
			D[i] = A[i];
		}

		if (max < D[i]) max = D[i];
	}

	cout << max;
}