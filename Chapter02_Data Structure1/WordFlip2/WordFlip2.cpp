#include <iostream>
#include <stack>
#include <queue>
#include <string>   

using namespace std;

int main()
{
    string str;
    string result;

    bool isSign = false;

    stack<char> s;

    getline(cin,str);

    for (char c : str)
    {
        if (isSign)
        {
            if (c == '>')
            {
                isSign = false;
            }
            result += c;
        }
        else
        {
            if (c == '<')
            {
                isSign = true;

                while (!s.empty())
                {
                    result += s.top();
                    s.pop();
                }

                result += c;
            }
            else if (c == ' ')
            {
                while (!s.empty())
                {
                    result += s.top();
                    s.pop();
                }
                result += c;
            }
            else
            {
                s.push(c);
            }
        }
    }

    while (!s.empty())
    {
        result += s.top();
        s.pop();
    }

    cout << result;
}
