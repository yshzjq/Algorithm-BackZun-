#include <iostream>

using namespace std;

int A[1001];
int D[1001];

int main()
{
	int N;

	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		cin >> A[i];
	}

	int max = 0;
	D[max] = 1;

	for (int i = 1; i <= N; i++)
	{
		D[i] = 1;
		for (int j = 1; j < i; j++)
		{
			if (A[j] < A[i] && D[j] + 1 > D[i])
			{
				D[i] = D[j] + 1;
				if (D[max] < D[i]) max = i;
			}
		}
	}

	cout << D[max];

	return 0;
}