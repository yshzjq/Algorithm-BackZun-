#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int result = 1;

    int t;

    cin >> t;

    for (int i = 2; i <= t; i++)
    {
        result *= i;
    }

    cout << result;


    return 0;
}