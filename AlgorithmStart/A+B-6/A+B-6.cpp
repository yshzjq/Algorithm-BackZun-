#include <iostream>
using namespace std;

int main()
{
	/* cin cout �� ����ӵ��� �������� �ڵ�*/ {
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);
	}

	int A, B, T;

	char C;

	cin >> T;

	while (T--)
	{
		cin >> A >> C >> B;

		cout << A + B << '\n';
	}

}
