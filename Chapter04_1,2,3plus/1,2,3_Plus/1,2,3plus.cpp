#include <iostream>

using namespace std;

int arr[11];

/*
// 정답 1 Top_Down
int f(int x)
{
    if (x == 0) return 1;
    if (arr[x] > 0) return arr[x];

    arr[x] += f(x - 1);
    if (x >= 2) arr[x] += f(x - 2);
    if (x >= 3) arr[x] += f(x - 3);

    return arr[x];
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, n;

    cin >> T;

    while (T--)
    {
        cin >> n;

        cout << f(n) << '\n';
    }

}
*/

// 정답 2 Bottom_down

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, n;

    cin >> T;

    arr[0] = 1;

    while (T--)
    {
        cin >> n;

        if (arr[n] == 0)
        {
            for (int i = 1; i <= n; i++)
            {
                if (arr[i] > 0) continue;

                arr[i] += arr[i - 1];

                if (i >= 2) arr[i] += arr[i - 2];
                if (i >= 3) arr[i] += arr[i - 3];

            }
        }
        cout << arr[n] << '\n';
    }

}

