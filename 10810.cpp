//
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int basket[n] = {0};

    int start, end, number;
    for (int i = 0; i < m; i++)
    {
        cin >> start >> end >> number;

        for (int idx = start - 1; idx < end; idx++)
        {
            basket[idx] = number;
        }
    }

    for (auto &ballNum : basket)
    {
        cout << ballNum << " ";
    }
}