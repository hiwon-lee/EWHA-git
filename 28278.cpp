//
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    cin.tie(NULL); // 입출력 묶음 해제
    ios_base::sync_with_stdio(false);
    int n, order;
    vector<int> stack;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> order;

        if (order == 1)
        {
            int x;
            cin >> x;
            stack.push_back(x);
        }
        else
        {
            switch (order)
            {
            case 2:
                if (stack.size())
                {
                    int top = stack.back();
                    stack.pop_back();
                    cout << top;
                }
                else
                {
                    cout << -1;
                }
                break;
            case 3:
                cout << stack.size();
                break;
            case 4:
                if (stack.size())
                    cout << 0;
                else
                    cout << 1;
                break;
            case 5:
                if (stack.size())

                    cout << stack.back();
                else
                    cout << -1;
            default:
                break;
            }
            cout << "\n";
        }
    }
}