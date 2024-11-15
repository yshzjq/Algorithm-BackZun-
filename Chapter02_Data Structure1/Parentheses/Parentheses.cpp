#include <iostream>
#include <string>

using namespace std;

int main()
{
	/* cin cout �� ����ӵ��� �������� �ڵ�*/ {
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);
	}

	int t;

	cin >> t;

	string str;
	int cnt;

	while (t--)
	{
		cin >> str;

		cnt = 0;

		for (char c : str)
		{
			if (c == '(')
			{
				cnt++;
			}
			else if (c == ')'&& cnt > 0)
			{
				cnt--;
			}
			else
			{
				cnt--;
				break;
			}
		}

		if (cnt == 0) cout << "YES\n";
		else cout << "NO\n";
	}
}