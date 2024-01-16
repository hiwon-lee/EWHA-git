// 제로
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int main()
{
    int k;
    cin >> k;
    stack<int> note;
    int ele;
    while (k--)
    {
        cin >> ele;
        if (ele)
        {
            note.push(ele);
        }
        else
        {
            note.pop();
        }
    }
    int result = 0;
    while (note.size())
    {
        result += note.top();
        note.pop();
    }
    cout << result;
}
