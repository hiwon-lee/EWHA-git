// 스택
#include <iostream>
#include <algorithm>
#include <stack>
#include <map>
using namespace std;

static map<string, int> m;
stack<int> stackStructure;

void init()
{
    m["push"] = 0;
    m["pop"] = 1;
    m["size"] = 2;
    m["empty"] = 3;
    m["top"] = 4;
}
// enum OrderMenu
// {
//     push = 0,
//     pop = 1,
//     size = 2,
//     empty = 3,
//     top = 4,
// };

void stackFunction(int orderId)
{
    switch (orderId)
    {
    case 0: // push
        /* code */
        int ele;
        cin >> ele;
        stackStructure.push(ele);
        break;
    case 1: // pop
        if (stackStructure.size())
        {
            cout << stackStructure.top() << "\n";
            stackStructure.pop();
            return;
        }
        cout << -1 << "\n";
        break;
    case 2: // size
        cout << stackStructure.size() << "\n";
        break;
    case 3: // empty
        if (stackStructure.size())
            cout << 0 << "\n";
        else
            cout << 1 << "\n";
        break;
    case 4: // top
        if (stackStructure.size())
        {
            cout << stackStructure.top() << "\n";
            return;
        }
        cout << -1 << "\n";
        break;
    default:
        break;
    }
}
int main()
{
    int n;
    string order;
    cin >> n;
    init();
    while (n--)
    {
        cin >> order;
        int orderId = m[order];
        // cout << orderId;
        stackFunction(orderId);
    }
}
