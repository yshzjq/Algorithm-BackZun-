#include <iostream>

using namespace std;
int A[100003];
int VL[100003];
int VR[100003];

int main()
{
	int n;

	cin >> n;

	for (int i = 1;i <= n;i++)
	{
		cin >> A[i];
	}

	for (int i = 1;i <= n;i++)
	{
		VL[i] = VL[i-1] + A[i];

		if (A[i] > VL[i])
		{
			VL[i] = A[i];
		}
	}
	
	for (int i = n;i >= 1;i--)
	{
		VR[i] = VR[i+1] + A[i];

		if (A[i] > VR[i])
		{
			VR[i] = A[i];
		}
	}

	int max = VL[1];

	for (int i = 1;i <= n;i++)
	{
		if (max < VL[i]) max = VL[i];
	}

	for (int i = 1;i < n;i++)
	{
		int tmp = VL[i - 1] + VR[i + 1];

		if (max < tmp) max = tmp;
	}

	cout << max << '\n';
}