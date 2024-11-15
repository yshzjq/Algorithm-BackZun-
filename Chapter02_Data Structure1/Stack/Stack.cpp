#include <iostream>

using namespace std;

int main()
{
	/* cin cout 의 실행속도가 빨라지는 코드*/ {
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);
	}

	int stack[10000] = {0};
	int ccount;

	int size = 0;

	string command;
	int num;

	cin >> ccount;

	while (ccount--)
	{
		cin >> command;

		if (command == "push")
		{
			cin >> num;
			stack[size] = num;
			size++;
		}
		else if (command == "pop")
		{
			if (size != 0)
			{
				cout << stack[size - 1] << '\n';
				stack[size - 1] = 0;
				size--;
			}
			else
			{
				cout << -1 << '\n';
			}
		}
		else if (command == "size")
		{
			cout << size << '\n';
		}
		else if (command == "empty")
		{
			if (size == 0) cout << 1 << '\n';
			else cout << 0 << '\n';
		}
		else if (command == "top")
		{
			if (size == 0) cout << -1 << '\n';
			else cout << stack[size - 1] << '\n';
		}
	}
}