#include <iostream>

using namespace std;

//TopDown 내가 풀어본 방식(수정
int A[100001];

int f(int n)
{
	if (n == 0) return 0;
	if (A[n] >= 1) return A[n];

	A[n] = n;

	for (int i = 1; i * i <= n; i++)
	{
		int tmp = f(n - (i * i)) + 1;
		if (A[n] > tmp) A[n] = tmp;
	}

	return A[n];
}

int main()
{
	int N;

	cin >> N;

	cout << f(N);

}




/* // bottom Down
int A[100001];

int main()
{
	int N;

	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		A[i] = i;

		for (int j = 1; j * j <= i; j++)
		{
			if (A[i] > A[i - (j * j)] + 1)
			{
				A[i] = A[i - (j * j)] + 1;
			}
		}
	}

	cout << A[N];

	return 0;
}
*/