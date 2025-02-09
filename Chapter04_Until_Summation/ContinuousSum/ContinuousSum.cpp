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

		D[i] = A[i] + D[i - 1];

		if (D[i] < A[i]) D[i] = A[i];
	}

	int max = D[1];

	for (int i = 1; i <= n; i++)
	{
		if (max < D[i]) max = D[i];
	}

	cout << max;
}