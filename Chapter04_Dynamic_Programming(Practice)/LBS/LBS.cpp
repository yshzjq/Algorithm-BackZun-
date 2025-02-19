#include <iostream>

using namespace std;

int A[1001];
int V1[1001];
int V2[1001];

int main()
{
	int N;

	cin >> N;

	for (int i = 1;i <= N;i++)
	{
		cin >> A[i];
	}

	for (int i = 1;i <= N;i++)
	{
		V1[i] = 1;

		for (int j = 1;j <= i;j++)
		{
			if (V1[i] <= V1[j] && A[i] > A[j])
			{
				V1[i] = V1[j] + 1;
			}
		}
	}

	for (int i = N;i >= 1;i--)
	{
		V2[i] = 1;


		for (int j = N;j > i ;j--)
		{
			if (V2[i] <= V2[j] && A[i] > A[j])
			{
				V2[i] = V2[j] + 1;
			}
		}
	}

	int max = 0;

	for (int i = 1;i <= N;i++)
	{
		int tmp = V1[i] + V2[i] - 1;
		if (max < tmp)
		{
			max = tmp;
		}
	}

	cout << max;


}