#include <iostream>

using namespace std;

int arr[1000001];

int f(int x)
{
	if (x == 1) return 0;

	if (arr[x] > 0) return arr[x];

	arr[x] = 1 + f(x - 1);
	if (x % 3 == 0)
	{
		int temp = 1 + f(x / 3);
		if (arr[x] > temp) arr[x] = temp;
	}

	if (x % 2 == 0)
	{
		int temp = 1 + f(x / 2);
		if (arr[x] > temp) arr[x] = temp;
	}

	return arr[x];
}

int main()
{
	{
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);
	}

	int X;

	cin >> X;

	cout << f(X);

}