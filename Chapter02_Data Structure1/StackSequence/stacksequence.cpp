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

    stack<int> s;

    int n;
    int x;

    string ans;

    cin >> n;

    int m = 0;

    while (n--)
    {
        cin >> x;

        if (x > m)
        {
            while (x > m)
            {
                s.push(++m);
                ans += '+';
            }
            s.pop();
            ans += '-';
        }
        else
        {
            if (!s.empty())
            {
                if (s.top() == x)
                {
                    s.pop();
                    ans += '-';
                }
                else
                {
                    cout << "NO";
                    return 0;
                }
            }
            else
            {
                cout << "NO";
                return 0;
            }
        }
    }

    for (char c : ans)
    {
        cout << c << '\n';
    }
}


//bool f(string* result,int count)
//{
//	int number;
//	int stack_number = 1;
//
//	int max = count;
//
//	bool possible = true;
//
//	stack<int> stack;
//
//	while (count--)
//	{
//		cin >> number;
//
//		if (number >= stack_number)
//		{
//			while (number >= stack_number)
//			{
//				stack.push(stack_number);
//				*result += '+';
//				stack_number++;
//			}
//
//			stack.pop();
//			*result += '-';
//		}
//		else if (number < stack_number)
//		{
//			if (stack.top() == number)
//			{
//				stack.pop();
//				*result += '-';
//			}
//			else possible = false;
//		}
//		else possible = false;
//	}
//
//	return possible;
//}
//
//int main()
//{
//	/* cin cout 의 실행속도가 빨라지는 코드*/ {
//		ios_base::sync_with_stdio(false);
//		cin.tie(NULL);
//		cout.tie(NULL);
//	}
//
//	int input_count;
//
//	string result_str;
//	string* result = &result_str;
//	
//	
//	cin >> input_count;
//
//	if (f(result, input_count))
//	{
//		for (char c : *result)
//		{
//			cout << c << '\n';
//		}
//	}
//	else
//	{
//		cout << "NO";
//	}
//
//}