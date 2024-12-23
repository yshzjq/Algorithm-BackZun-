#include <iostream>

using namespace std;



/*
// 정답 1 Top_Down

long long int arr[101][10];

long long int f(int pos, int num)
{
	if (pos == 0 && num == 0) return 0;
	else if (pos == 0) return 1;

	if (arr[pos][num] > 0) return arr[pos][num];

	long long int sum = 0;

	if (num == 0 || num == 10)
	{
		if (pos == 1)
		{
			arr[pos][0] = 0;
		}
		else arr[pos][0] = f(pos - 1, 1);
		sum += arr[pos][0];
		sum %= 1000000000LL;
	}

	for (int i = 1; i <= 8; i++)
	{
		if (num == i || num == 10)
		{
			if (pos == 1)
			{
				arr[pos][i] = 1;
			}
			else
			{
				arr[pos][i] = f(pos - 1, i - 1) + f(pos - 1, i + 1);
			}
			sum += arr[pos][i];
			sum %= 1000000000LL;
		}

	}

	if (num == 9 || num == 10)
	{
		if (pos == 1)
		{
			arr[pos][9] = 1;
		}
		else arr[pos][9] = f(pos - 1, 8);
		sum += arr[pos][9];
		sum %= 1000000000LL;
	}

	return sum % 1000000000LL;
}

int main()
{
	int N;
	cin >> N;

	cout << f(N, 10) << '\n';
}
*/

// 정답 2 Bottom_Down

long long int arr[101][10];

int main()
{
	int N;
	cin >> N;

	for (int i = 1; i <= 9; i++)
	{
		arr[0][i] = 1;
	}

	for (int i = 1; i <= N; i++)
	{

		for (int j = 0; j <= 9; j++)
		{
			if (j == 0)
			{
				if (i == 1) arr[i][0] = 0;
				else arr[i][0] = arr[i - 1][1] % 1000000000LL;
				continue;
			}

			if (j == 9)
			{
				if (i == 1) arr[i][9] = 1;
				else arr[i][9] = arr[i - 1][8] % 1000000000LL;
				continue;
			}

			if (i == 1) arr[i][j] = 1;
			else arr[i][j] = (arr[i - 1][j - 1] + arr[i - 1][j + 1]) % 1000000000LL;
		}
	}

	long long int sum = 0;

	for (int i = 0; i <= 9; i++)
	{
		sum += arr[N][i];
		sum %= 1000000000LL;
	}

	cout << sum;
}