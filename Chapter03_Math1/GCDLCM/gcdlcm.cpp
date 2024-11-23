#include <iostream>

using namespace std;

int f_lcd(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	else
	{
		return f_lcd(b, a % b);
	}
}

int main()
{
	int a, b;

	cin >> a >> b;

	int lcd = f_lcd(a,b);

	cout << lcd << '\n' << a*b/lcd;

	return 0;
}