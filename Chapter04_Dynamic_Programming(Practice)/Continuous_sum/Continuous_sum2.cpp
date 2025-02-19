#include <iostream>

using namespace std;

int A[100001];
int V[100001];

int main()
{
	int n;

	cin >> n;

	for (int i = 1;i <= n;i++)
	{
		cin >> A[i];
	}

	int max = 0;


	A[0] = 0;
	for (int i = 0;i <= n;i++)
	{
		int tmp = A[i];
		A[i] = 0;

		for (int j = 1;j <= n;j++)
		{
			V[j] = A[j] + V[j - 1];

			if (V[j] < A[j]) V[j] = A[j];

			
		}

		for (int k = 1;k <= n;k++)
		{
			if (max < V[k]) max = V[k];
			V[k] = 0;
		}

		A[i] = tmp;
	}

	cout << max;
}