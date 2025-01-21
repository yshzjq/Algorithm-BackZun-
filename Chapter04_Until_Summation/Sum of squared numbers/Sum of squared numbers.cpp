#include <iostream>

using namespace std;

int D[100001];

int f(int n)
{
	if (n == 0) return 0;

	for (int i = 1; i*i <= n; i++)
	{
		if (D[n] > 0)
		{
			int tmp = f(n - (i * i)) + 1;
			if (D[n] > tmp)
			{
				D[n] = tmp;
			}
		}
		else
		{
			D[n] = f(n - (i * i)) + 1;
		}
	}

	return D[n];
}

int main()
{
	int n;

	cin >> n;

	cout << f(n);
}