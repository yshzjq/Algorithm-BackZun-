#include <iostream>

using namespace std;

/*
int arr[11];

int cnt;

void f(int n,int idx, int sum)
{
	if (n == sum)
	{
		cnt++;
		return;
	}
	else if (n < sum) return;

	for (int i = 1; i <= 3; i++)
	{
		arr[idx] = i;
		
		f(n, idx+1, sum + i);
	}
}

int main()
{
	{
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);
	}

	int T;

	cin >> T;

	while (T--)
	{
		int n;

		cin >> n;

		cnt = 0;
		f(n, 1, 0);

		cout << cnt << '\n';
	}

}
*/

int cnt;
int arr[11];

void f(int n)
{
	if (n == 0)
	{
		cnt++;
		return;
	}

	if (n < 0) return;

	f(n - 1);
	f(n - 2);
	f(n - 3);
}

int main()
{
	{
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);
	}

	int T;

	cin >> T;

	while (T--)
	{
		int n;

		cin >> n;

		cnt = 0;

		f(n);

		cout << cnt << '\n';
	}

}