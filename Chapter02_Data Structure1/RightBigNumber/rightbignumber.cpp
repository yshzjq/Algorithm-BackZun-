#include <iostream>
#include <string>
#include <stack>
#include <vector>	

using namespace std;

int main()
{
	stack<int> s;

	int t;

	cin >> t;
	vector<int> a(t);
	vector<int> ans(t);

	for (int i = 0; i < t; i++)
	{
		cin >> a[i];
	}

	s.push(0);

	for (int i = 1; i < t; i++)
	{
		while (!s.empty() && a[s.top()] < a[i])
		{
			ans[s.top()] = a[i];
			s.pop();
		}

		s.push(i);
	}

	while (!s.empty())
	{
		ans[s.top()] = -1;
		s.pop();
	}

	for (int i = 0; i < t; i++)
	{
		cout << ans[i] << ' ';
	}

	return 0;
}

