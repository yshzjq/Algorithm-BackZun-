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
	int num = 1;
	cin >> T;

	while (T--)
	{
		cin >> A >> B;

		cout << "Case #" << num << ": " << A + B << '\n';
		num++;
	}

}