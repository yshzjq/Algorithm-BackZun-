#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    /* cin cout 의 실행속도가 빨라지는 코드*/ {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }

    stack<char> s;

    string str;

    int t;

    cin >> str >> t;

    while (t--)
    {
        char c;

        cin >> c;

        switch (c) 
        {
            case 'L':
                if (str.empty()) break;

                s.push(str[str.size()-1]);
                str.pop_back();
            break;

            case 'D':
                if (s.empty()) break;

                str.push_back(s.top());
                s.pop();
            break;

            case 'B':
                if (str.empty()) break;
                str.pop_back();
            break;

            case 'P':
                char ac;
                cin >> ac;
                str.push_back(ac);
            break;
        }
    }

    cout << str;

    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
}
