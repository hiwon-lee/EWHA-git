// 암기왕
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> num;

int checkNum(int curr)
{
    int min = 0, max = num.size() - 1;
    int mid;

    while (min <= max)
    {
        mid = (max + min) / 2;

        if (num[mid] == curr)
        {
            return 1;
        }
        else if (num[mid] > curr)
        {
            max = mid - 1;
        }
        else
        {
            min = mid + 1;
        }
    }
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, n, m;
    cin >> t;
    while (t--)
    {
        int curr;
        cin >> n;
        num.clear();

        while (n--)
        {
            cin >> curr;
            num.push_back(curr);
        }
        sort(num.begin(), num.end());

        cin >> m;
        while (m--)
        {
            cin >> curr;
            cout << checkNum(curr) << "\n";
        }
    }
}
