// 단어 뒤집기
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    // char *str[t];
    string str;
    stack<char> tmpStack;
    for (int i = 0; i < t; i++)
    {
        getline(cin, str);
        str.append(" ");

        for (int j = 0; j < str.size(); j++)
        {
            if (str[j] == ' ')
            {
                while (tmpStack.size())
                {
                    cout << tmpStack.top();
                    tmpStack.pop();
                }
                cout << " ";
            }
            else
            {
                tmpStack.push(str[j]);
            }
        }
        cout << "\n";
    }
}
