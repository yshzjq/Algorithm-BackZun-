#include <iostream>

using namespace std;

int A[1001];
int V[1001];

int main()
{
	int N;

	cin >> N;

	for (int i = 1;i <= N;i++)
	{
		cin >> A[i];
	}

	for (int i = N;i >= 1;i--)
	{
		V[i] = 1;

		for (int j = N;j >= i;j--)
		{
			if (A[i] > A[j] && V[i] <= V[j])
			{
				V[i] = V[j] + 1;
			}
		}
	}

	int max = 0;
	for (int i = 1;i <= N;i++)
	{
		if (V[i] > max) max = V[i];
	}

	cout << max;
}