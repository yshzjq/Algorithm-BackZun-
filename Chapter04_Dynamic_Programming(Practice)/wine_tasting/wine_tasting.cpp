#include <iostream>
#include <algorithm>

using namespace std;


int wine[10001];
int A[10001][3];

int main()
{
	int n;

	cin >> n;

	for (int i = 1;i <= n;i++)
	{
		cin >> wine[i];
	}

	A[1][0] = 0;
	A[1][1] = wine[1];
	A[1][2] = wine[0] + wine[1];


	for (int i = 2;i <= n;++i)
	{
		A[i][0] = max({A[i - 1][2], A[i-1][0],A[i-1][1]});
		A[i][1] = A[i-1][0] + wine[i];
		A[i][2] = A[i-1][1] + wine[i];
	}

	cout << max({ A[n][0],A[n][1],A[n][2] }) << '\n';
	return 0;

}