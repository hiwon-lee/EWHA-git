// 스택 수열
#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
using namespace std;

stack<int> chker;
vector<char> arr;
int curr = 1;

bool getStack(int ele)
{
    if (curr <= ele)
    {

        for (curr; curr <= ele; curr++)
        {
            chker.push(curr);
            arr.push_back('+');
        }
        chker.pop();
        arr.push_back('-');
    }
    else
    {
        if (chker.top() == ele)
        {
            chker.pop();
            arr.push_back('-');
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int ele;
        cin >> ele;
        if (getStack(ele))
        {
            if (!n)
            {
                for (auto a : arr)
                    cout << a << "\n";
            }
        }
        else
        {
            cout << "NO";
            break;
        }
    }
}
