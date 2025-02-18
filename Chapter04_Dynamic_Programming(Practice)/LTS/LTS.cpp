#include <iostream>	

using namespace std;

int A[1001];
int V[1001];

int main()
{
	int N;

	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		cin >> A[i];
	}

	for (int i = 1; i <= N; i++)
	{
		V[i] = A[i];
		for (int j = 1; j < i; j++)
		{
			if (A[i] > A[j] && V[i] < V[j] + A[i])
			{
				V[i] = V[j] + A[i];
			}
		}		
	}
	int max = 0;
	for (int i = 1; i <= N; i++)
	{
		if (V[i] > max) max = V[i];
	}

	cout << max;

}