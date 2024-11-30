#include <iostream>
#include <string>

using namespace std;

// 해답 안 본 풀이
//int pow(int n,int cnt)
//{
//	if (cnt == 0)
//	{
//		return 1;
//	}
//	else if (cnt >= 1)
//	{
//		return pow(n, cnt - 1) * n;
//	}
//}
//
//int main()
//{
//	{
//		ios_base::sync_with_stdio(false);
//		cin.tie(NULL);
//		cout.tie(NULL);
//	}
//
//	string binary;
//	string octa;
//
//	cin >> binary;
//
//	int sum = 0;
//	int octaidx = 0;
//
//	int start;
//
//	if (binary.size() % 3 == 0) start = 0;
//	else
//	{
//		if (binary.size() % 3 == 1) start = 2;
//		else start = 1;
//	}
//
//	for ( int i = 0 ; i < binary.size(); i++)
//	{
//		if (binary[i] == '1')
//		{
//			sum += pow(2, 2 - ((i+start) % 3));
//		}
//
//		if ((i + start) % 3  == 2)
//		{
//			octa.push_back(sum + '0');
//			sum = 0;
//			octaidx++;
//		}
//	}
//
//	cout << octa;
//}


int main()
{
	{
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);
	}

	string binary;


	cin >> binary;

	int size = binary.size();

	if (size % 3 != 0)
	{

		if (size % 3 == 1)
		{
			cout << binary[0];
		}
		else if (size % 3 == 2)
		{
			cout << (binary[0] - '0') * 2 + (binary[1] - '0') * 1;
		}
		
	}

	for (int i = size%3; i < size; i+=3)
	{
		cout << ((binary[i] - '0') * 4 + (binary[i + 1] - '0') * 2 + (binary[i + 2] - '0') * 1);

	}
}