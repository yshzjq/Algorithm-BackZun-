#include <iostream>
using namespace std;

long long int GCD(long long int a, long long int b)
{
	if (b == 0)
		return a;

	return GCD(b, a % b);
}

long long int f(long long int arr[],long long int n)
{
	for (int i = 0; i < n-1; i++)
	{
		arr[i + 1] = GCD(arr[i], arr[i + 1]);
	}

	return arr[n - 1];
}

int main()
{
	{
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);
	}

	long long int bro[100000];

	long long int N, S;

	cin >> N >> S;

	for (int i = 0; i < N; i++)
	{
		cin >> bro[i];

		if (bro[i] < S)
		{
			bro[i] = S - bro[i];
		}
		else
		{
			bro[i] = bro[i] - S;
		}
	}

	cout << f(bro,N);

}