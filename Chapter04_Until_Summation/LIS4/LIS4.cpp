#include <iostream>
#include <stack>

using namespace std;

int A[1001];
int D[1001];
int V[1001];

void f(int p)
{
	if (p == 0) return;

	f(V[p]);
	cout << A[p] << ' ';
}

int main()
{
	int N;

	stack<int> stk;

	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		cin >> A[i];
	}

	int max = 1;

	for (int i = 1; i <= N; i++)
	{
		D[i] = 1;
		V[i] = 0;
		for (int j = 1; j < i; j++)
		{
			if (A[j] < A[i] && D[j] + 1 > D[i])
			{
				D[i] = D[j] + 1;
				V[i] = j;
				if (D[max] < D[i])
				{
					max = i;
				}
			}
		}
	}

	cout << D[max] << '\n';

	f(max);

	return 0;
}