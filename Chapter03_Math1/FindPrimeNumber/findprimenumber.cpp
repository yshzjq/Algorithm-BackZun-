#include <iostream>

using namespace std;

int main()
{
	{
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);
	}
	bool check[1000001] = { false };

	check[0] = check[1] = true;

	int M, N;

	cin >> M >> N;

	for (int i = 2; i <= N; i++)
	{
		if (check[i] == false)
		{
			if (i >= M)
			{
				cout << i << '\n';
			}

			for (int j = i*2; j <= N; j += i)
			{
				check[j] = true;
			}
		}
	}

	return 0;
}