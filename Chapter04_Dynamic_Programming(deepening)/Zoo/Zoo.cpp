#include <iostream>

using namespace std;

int A[100001];
int S[100001];

int main()
{
	int N;

	cin >> N;

	A[0] = 1;
	A[1] = 3;
	S[1] = A[1];

	for (int i = 2;i <= N;i++)
	{
		A[i] += A[i - 1] + 2*A[i-2];
	}

	cout << A[N] % 9901;

}