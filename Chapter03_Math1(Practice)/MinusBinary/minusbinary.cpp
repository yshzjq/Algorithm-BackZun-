#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	{
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);
	}

	stack<long long int> s;
	int n;

	cin >> n;

	if (n == 0) {
		cout << 0;
		return 0; 
	}

	while (n != 0)
	{
		if (n < 0)
		{
			s.push(n % (-2));
			if (n % -2 == 0)
			{
				n /= (-2);
			}
			else n = n / (-2) + 1;
		}
		else if (n > 0)
		{
			s.push(n % (-2));
			n = n / (-2);
		}
		
	}
	
	while (!s.empty())
	{
		if (s.top() <= 0)
		{
			cout << s.top() * -1;
		}
		else cout << s.top();
		s.pop();
	}
}