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

	for (int i = 2; i <= 1000000; i++)
	{
		if (check[i] == false)
		{
			for (int j = i * 2; j <= 1000000; j += i)
			{
				check[j] = true;
			}
		}
	}

	while (true)
	{
		int num;

		cin >> num;

		if (num == 0) break;

		for (int i = num - 1; i > 1; i--)
		{
			if (check[i] == false && check[num - i] == false && num == i + num - i)
			{
				cout << num << " = " << num - i << " + " << i << '\n';
				break;
			}
		}
	}

	return 0;
}
