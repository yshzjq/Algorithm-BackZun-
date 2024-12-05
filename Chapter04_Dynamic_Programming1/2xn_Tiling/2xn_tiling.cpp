#include <iostream>

using namespace std;

int arr[1001];

//Top_Down

int f(int n)
{
	if (n <= 0) return 0;
	if (n <= 2) return n;


	if (arr[n] > 0) return arr[n];

	arr[n] = ( f(n - 2) + f(n - 1)) % 10007;

	return arr[n];
}


int main()
{
	{
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);
	}

	int n;

	cin >> n;

	cout << f(n);

}


// bottom_Down
/*
int main()
{
	{
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);
	}

	int n;

	cin >> n;

	arr[1] = 1;
	arr[2] = 2;

	if (n >= 3)
	{
		for (int i = 3; i <= n; i++)
		{
			arr[i] = (arr[i - 1] + arr[i - 2])%10007;
		}
	}

	cout << arr[n];
}
*/