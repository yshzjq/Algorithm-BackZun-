#include <iostream>
#define mod 9901

using namespace std;

int A[100001][4];

int main()
{
	int N;

	cin >> N;

	A[1][1] = 1; // »çÀÚ(ÁÂ)
	A[1][2] = 1; // »çÀÚ(¿ì)
	A[1][3] = 1; // ºóÄ­

	for (int i = 2; i <= N; i++)
	{
		A[i][1] += (A[i - 1][2] + A[i - 1][3]);
		A[i][2] += A[i-1][1] + A[i-1][3];
		A[i][3]	+= A[i - 1][1] + A[i - 1][2] + A[i - 1][3];

		A[i][1] %= mod;
		A[i][2] %= mod;
		A[i][3] %= mod;
	}

	cout << (A[N][1] + A[N][2] + A[N][3]) % mod;

}