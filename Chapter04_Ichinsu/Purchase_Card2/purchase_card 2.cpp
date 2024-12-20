#include <iostream>

using namespace std;


// 정답 1 Top_Down


int arr[1001];
int p[1001];


int f(int n,int cards)
{
	if (n == 0) return 0;
	if (arr[n] > 0) return arr[n];
	
	arr[n] = f(n - 1, cards) + p[1];

	for (int i = 2; i <= cards; i++)
	{
		if (n < i) break;

		int tmp = f(n - i, cards) + p[i];
		if (arr[n] > tmp) arr[n] = tmp;
	}

	return arr[n];

}

int main()
{
	{
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);
	}

	int N;

	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		cin >> p[i];
	}

	cout << f(N,N);
}


// 정답 2 Bottom_Down

/*
int arr[1001];
int p[1001];

int main()
{
	{
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);
	}

	int N;

	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		cin >> p[i];
	}

	arr[1] = p[1];

	for (int i = 2; i <= N; i++)
	{
		
		arr[i] = arr[i - 1] + p[1];

		for (int j = 2; j <= N; j++)
		{
			if (i < j) break;

			int tmp = arr[i - j] + p[j];
			if (arr[i] > tmp) arr[i] = tmp;
		}
	}

	cout << arr[N];
*/