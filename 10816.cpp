// 숫자 카드2
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;

    cin >> n;
    vector<int> card;
    int curr;
    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        card.push_back(curr);
    }

    sort(card.begin(), card.end()); // 이진 탐색을 위한 정렬

    cin >> m;

    for (int i = 0; i < m; i++)
    {
        cin >> curr;
        // cout << card.count(chk[i]);
        cout << upper_bound(card.begin(), card.end(), curr) - lower_bound(card.begin(), card.end(), curr) << " ";
    }
}
