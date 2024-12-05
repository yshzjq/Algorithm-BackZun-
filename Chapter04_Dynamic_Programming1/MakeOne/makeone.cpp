#include <iostream>

using namespace std;

int arr[1000001];

// 정답 1 Top_Down
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

/* 정답 2 Bottom_Down
int main()
{
	int N;

	cin >> N;

	arr[1] = 0;

	if (N > 1)
	{
		for (int i = 2; i <= N; i++)
		{
			arr[i] = arr[i - 1] + 1;
			if (i % 2 == 0 && arr[i] > arr[i / 2] + 1)
			{
				arr[i] = arr[i / 2] + 1;
			}

			if (i % 3 == 0 && arr[i] > arr[i / 3] + 1)
			{
				arr[i] = arr[i / 3] + 1;
			}
		}
	}
	cout << arr[N];
}
*/