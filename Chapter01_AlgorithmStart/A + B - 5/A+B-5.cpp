#include <iostream>
using namespace std;

int main()
{
	/* cin cout �� ����ӵ��� �������� �ڵ�*/ {
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);
	}

	int A, B;

	while (cin >> A >> B) // ���������� �Է� ������ true
	{
		if (A == 0 && B == 0) break;
		cout << A + B << '\n';
	}

	return 0;
}
