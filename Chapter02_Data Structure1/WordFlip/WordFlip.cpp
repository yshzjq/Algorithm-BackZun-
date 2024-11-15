#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	/* cin cout �� ����ӵ��� �������� �ڵ�*/ {
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);
	}

	int n;

	string str;
	stack<char> stack;

	cin >> n;
	cin.ignore();

	while (n--)
	{
		getline(cin,str);
		str += '\n';
		
		for (char c : str)
		{
			if (c == ' ' || c == '\n')
			{
				while (!stack.empty())
				{
					cout << stack.top();
					stack.pop();
				}
				cout << c;
			}
			else
			{
				stack.push(c);
			}
		}
	}
}