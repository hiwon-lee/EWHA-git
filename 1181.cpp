// 단어 정렬
#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;

bool cmp(string a, string b)
{
    if (a.size() == b.size())
    {
        return a < b;
    }
    return a.size() < b.size();
}
int main()
{
    int n;
    cin >> n;

    set<string> lawSet;
    while (n--)
    {
        string str;
        cin >> str;
        lawSet.insert(str);
    }

    vector<string> arr(lawSet.begin(), lawSet.end());
    sort(arr.begin(), arr.end(), cmp);

    for (auto e : arr)
    {
        cout << e << "\n";
    }
}
