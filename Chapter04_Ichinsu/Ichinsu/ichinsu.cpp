#include <iostream>

using namespace std;

long long arr[91][2];

/*
// 정답 1 Top_Down
long long int f(int pos,int n)
{
	if (pos == 1 && n == 1)return 1;
	if (pos == 1 && n == 0) return 0;
	if (arr[pos][n] > 0) return arr[pos][n];

	if (n == 0 || n == 2)
	{
		if (pos == 1) arr[pos][0] = 0;
		else arr[pos][0] = f(pos - 1, 0) + f(pos - 1, 1);
	}
	if (n == 1 || n == 2)
	{
		if (pos == 1) arr[pos][1] = 1;
		else arr[pos][1] = f(pos - 1, 0);
	}

	if (n == 0) return arr[pos][0];
	else if (n == 1)return arr[pos][1];
	else return arr[pos][0] + arr[pos][1];
}

int main()
{
	int N;
	cin >> N;

	cout << f(N,2) << '\n';
}
*/

// 정답 2 Bottom_Down
/*
int main()
{
	int N;
	cin >> N;

	arr[1][0] = 0;
	arr[1][1] = 1;

	for (int i = 2; i <= N; i++)
	{
		arr[i][0] = arr[i - 1][1] + arr[i - 1][0];
		arr[i][1] = arr[i - 1][0];
	}

	cout << arr[N][0] + arr[N][1];
}
*/

// 정답 3 TopDown

long long int ar[100];

long long int f(int n)
{
	if (n < 0) return 0;
	if (n == 1) return 1;
	if (ar[n] > 0) return ar[n];

	ar[n] = f(n - 1) + f(n - 2);

	return ar[n];
}

int main()
{
	int N;
	cin >> N;

	cout << f(N);
}