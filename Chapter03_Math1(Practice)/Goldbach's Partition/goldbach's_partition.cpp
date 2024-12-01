#include <iostream>
using namespace std;




int main()
{
	{
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);
	}
	//¼Ò¼ö

	bool check[1000001] = {};

	check[0] = check[1] = true;

	for (int i = 2; i * 2 <= 1000000; i++)
	{
		if (check[i] == false)
		{
			for (int j = i * 2; j <= 1000000; j += i)
			{
				check[j] = true;
			}
		}
	}


	int T;

	cin >> T;

	long long int n;

	while (T--)
	{
		cin >> n;

		int count = 0;

		for (int i = 2; i <= n/2; i++)
		{
			if (check[i] == false && check[n - i] == false) count++;
		}

		cout << count << '\n';
	}

}