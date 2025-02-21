#include <iostream>

using namespace std;

int A[31];

int main()
{
	int N;

	cin >> N;

	A[0] = 1;
	A[2] = 3; 

	for (int i = 2;i <= N;i+=2)
	{
		A[i] = A[i - 2] * 3;

		for (int j = i-4;j >= 0;j -= 2)
		{
			A[i] += A[j] * 2;
		}
	}

	cout << A[N] << '\n';
}