#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;

    int n2 = 0, n5 = 0;
    int m2 = 0, m5 = 0;
    int nm2 = 0, nm5 = 0;

    int ans;

    cin >> n >> m;

    for (long long int i = 2; i <= n; i *= 2)
    {
        n2 += n / i;
    }

    for (long long int i = 5; i <= n; i *= 5)
    {
        n5 += n / i;
    }

    for (long long int i = 2; i <= m; i *= 2)
    {
        m2 += m / i;
    }

    for (long long int i = 5; i <= m; i *= 5)
    {
        m5 += m / i;
    }

    for (long long int i = 2; i <= n-m; i *= 2)
    {
        nm2 += (n - m) / i;
    }

    for (long long int i = 5; i <= n-m; i *= 5)
    {
        nm5 += (n - m) / i;
    }

    if ((n2 - m2 - nm2) >= (n5 - m5 - nm5)) ans = n5 - m5 - nm5;
    else ans = n2 - m2 - nm2;

    cout << ans << '\n';

    return 0;
}