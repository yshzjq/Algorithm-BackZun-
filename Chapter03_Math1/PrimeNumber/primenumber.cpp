#include <iostream>

using namespace std;

bool prime(int n)
{
	if (n < 2) return false;

	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0) return false;
	}

	return true;
}

int main()
{
	{
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);
	}
	int t;
	int result = 0;

	cin >> t;

	int inputnum;
	bool isprime;
	while (t--)
	{
		isprime = true;
		cin >> inputnum;

		if (prime(inputnum)) result++;
	}

	cout << result;

	return 0;
}