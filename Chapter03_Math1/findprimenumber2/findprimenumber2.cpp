
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
	check[0] = check[1] = check[2] = check[3] = check[5] = true;

	int i;
	for (i = 1; 6 * i + 5 <= 1000000; i++)
	{
		if (check[i] == false)
		{
			check[6*i+1] = false;
			check[6*i+5] = false;
		}
	}

	if (6 * i + 1 <= 1000000) check[6 * (i - 1) + 1] = false;

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