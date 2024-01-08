// 나무 자르기
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;

    vector<int> tree;
    int curr;
    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        tree.push_back(curr);
    }

    sort(tree.begin(), tree.end());

    int rest = 0, idx = n - 1;

    long long rst = tree[n - 1];
    int chkMin = 1;

    while (rest < m)
    {
        int d;

        if (idx)
        {
            d = tree[idx] - tree[idx - 1];
        }
        else
        {
            d = 2;
        }
        if (d > chkMin)
        {
            rest += (n - idx);
            // cout << chkMin << endl;
            if (rest >= m)
            {
                rst -= chkMin;
            }
            chkMin++;
        }
        else
        {
            rst -= chkMin;
            idx--;
            chkMin = 0;
        }
    }

    cout << rst << "\n";
}
