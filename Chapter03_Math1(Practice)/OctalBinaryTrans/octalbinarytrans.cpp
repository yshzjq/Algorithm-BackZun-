#include <iostream>
#include <string>

using namespace std;

int main()
{
	{
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);
	}

	string octa;

	cin >> octa;

	if (octa[0] <= '1')
	{
		cout << octa[0];
	}
	else
	{
		cout << 1;

		if (octa[0] >= '4')
		{
			cout << (octa[0] - '0' - 4) / 2 << (octa[0] - '0' - 4) % 2;
		}
		else
		{
			cout << (octa[0] - '0') % 2;
		}
	}

	for (int i = 1; i < octa.size(); i++)
	{
		if (octa[i] <= '1')
		{
			cout << "00" << octa[i];
		}
		else
		{
			if (octa[i] >= '4')
			{
				cout << 1 << (octa[i] - '0' - 4) / 2 << (octa[i] - '0' - 4) % 2;
			}
			else
			{
				cout << 0 << (octa[i] - '0') / 2 << (octa[i] - '0') % 2;
			}
		}
	}

	
}