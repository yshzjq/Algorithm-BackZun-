#include <iostream>

using namespace std;


// 정답 1 Top_Down


long long int arr[100001][4];


long long int f(int n,int check)
{
	if (n == 0) return 1;

	if (check == 1)
	{
		if (arr[n][2] > 0 && arr[n][3] > 0)
		{
			return arr[n][2] + arr[n][3];
		}
	}
	else if (check == 2)
	{
		if (arr[n][1] > 0 && arr[n][3] > 0)
		{
			return arr[n][1] + arr[n][3];
		}
	}
	else if (check == 3)
	{
		if (arr[n][1] > 0 && arr[n][2] > 0)
		{
			return arr[n][1] + arr[n][2];
		}
	}

	if (check != 1)
	{
		arr[n][1] += f(n - 1, 1);
	}

	if (check != 2 && n >= 2)
	{
		arr[n][2] += f(n - 2, 2);
	}

	if (check != 3 && n >= 3)
	{
		arr[n][3] += f(n - 3, 3);
	}

	
	if (check == 0)
	{
		return arr[n][1] + arr[n][2] + arr[n][3];
	}
	else if (check == 1)
	{
		return arr[n][2] + arr[n][3];
	}
	else if (check == 2)
	{
		return arr[n][1] + arr[n][3];
	}
	else if (check == 3)
	{
		return arr[n][1] + arr[n][2];
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

	arr[0][1] = 1;
	arr[0][2] = 1;
	arr[0][3] = 1;
	arr[1][1] = 0;
	arr[1][2] = 1;
	arr[1][3] = 2;

	while (T--)
	{
		int n;
		cin >> n;

		cout  << f(n,0) << '\n';
	}
}

// 정답 2 Bottom_Down
