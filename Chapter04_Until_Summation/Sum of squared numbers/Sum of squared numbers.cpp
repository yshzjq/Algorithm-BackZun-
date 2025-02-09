#include <iostream>

using namespace std;

long long int A[100001];

long long int f(long long int n)
{
	if (A[n] >= 1) return A[n];
	if (n <= 1) return n;

	for (int i = 1; i * i <= n;i++)
	{
		if (n >= i * i)
		{
			int tmp = f(n - (i * i)) + 1;
			if (A[n] == 0 || A[n] > tmp) A[n] = tmp;
		}
		else break;
	}

	return A[n];
}

int main()
{
	long long int N;

	cin >> N;

	cout << f(N);

}