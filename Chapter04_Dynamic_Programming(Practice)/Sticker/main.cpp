	#include <iostream>
	#include <algorithm>

	using namespace std;

	long long A[3][100001];
	long long B[4][100001];

	int main()
	{
		ios_base::sync_with_stdio(false);
		cin.tie(nullptr);
		cout.tie(nullptr);

		int n,T;

		cin >> T;

		while (T--)
		{
			cin >> n;

			for (int i = 1;i <= n;i++)
			{
				cin >> A[1][i];
			}
			for (int i = 1;i <= n;i++)
			{
				cin >> A[2][i];
			}

			for (int i = 1;i <= n;i++)
			{
				B[1][i] = max({ B[1][i - 1],B[2][i - 1],B[3][i - 1] });
				B[2][i] = max(B[1][i-1],B[3][i-1]) + A[2][i];
				B[3][i] = max(B[1][i-1],B[2][i-1]) + A[1][i];
			}

			cout << max({ B[1][n],B[2][n],B[3][n]}) << '\n';
		}

	}