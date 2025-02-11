#include <iostream>

using namespace std;

int RGB[1001][4];

int main()
{
	int N;

	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		cin >> RGB[i][1] >> RGB[i][2] >> RGB[i][3];
	}

	for (int i = 2; i <= N; i++)
	{
		RGB[i][1] += RGB[i - 1][2] >= RGB[i - 1][3] ? RGB[i - 1][3] : RGB[i - 1][2];
		RGB[i][2] += RGB[i - 1][1] >= RGB[i - 1][3] ? RGB[i - 1][3] : RGB[i - 1][1];
		RGB[i][3] += RGB[i - 1][1] >= RGB[i - 1][2] ? RGB[i - 1][2] : RGB[i - 1][1];
	}


	cout << ((RGB[N][1] >= RGB[N][2]) ? (RGB[N][2] >= RGB[N][3] ? RGB[N][3] : RGB[N][2]) : (RGB[N][1] >= RGB[N][3]) ? RGB[N][3] : RGB[N][1]);


}