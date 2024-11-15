#include <iostream>
using namespace std;

int main()
{
	/* cin cout 의 실행속도가 빨라지는 코드*/ {
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);
	}

	int A, B;

	cin >> A >> B;

	cout << A + B;

}
