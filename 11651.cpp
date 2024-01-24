#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
    {
        return a.first < b.first;
    }
    return a.second < b.second;
}

int main()
{
    int n, x, y;
    cin >> n;
    vector<pair<int, int>> indexes;
    while (n--)
    {
        cin >> x >> y;
        indexes.push_back(make_pair(x, y));
    }

    sort(indexes.begin(), indexes.end(), cmp);

    for (auto index : indexes)
    {
        cout << index.first << " " << index.second << "\n";
    }
}