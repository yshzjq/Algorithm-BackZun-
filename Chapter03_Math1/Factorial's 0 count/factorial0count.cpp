#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;

    int result = 0;

    for (int i = 5; i <= N;i += 5)
    {
        result++;
    }
    
    for (int i = 25; i <= N; i += 25)
    {
        result++;
    }

    for (int i = 125; i <= N; i += 125)
    {
        result++;
    }

    cout << result << '\n';

    return 0;
}