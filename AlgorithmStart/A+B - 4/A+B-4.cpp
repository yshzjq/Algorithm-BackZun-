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
		cout << A + B << '\n';
	}

}
