#include <iostream>	

using namespace std;

int A[1001];
int V[1001];
int H[1001];

void f(int n)
{

	if (n == 0) return;

	f(H[n]);
	cout << A[n] << ' ';

	return;
}

int main()
{
	int N;
	int max = 1;
	int maxidx = 1;

	cin >> N;

	for (int i = 1; i <= N; ++i)
	{
		cin >> A[i];
	}

	for (int i = 1; i <= N; ++i)
	{
		V[i] = 1;

		for (int j = 1; j < i; ++j)
		{
			if (A[j] < A[i] && V[i] <= V[j])
			{
				V[i] = V[j] + 1;
				H[i] = j;
				if (max < V[i])
				{
					max = V[i];
					maxidx = i;
				}
			}
		}
	}
	cout << max << '\n';

	f(maxidx);

	return 0;
}