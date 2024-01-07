// 숫자 카드2
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

vector<int> card;

bool isThere(int ele)
{
    int min = 0, max = card.size();
    int mid = (min + max) / 2;

    while (min <= max)
    {
        if (card[mid] == ele)
        {
            return true;
        }
        else if (card[mid] > ele)
        {
            max = mid - 1;
            mid = (min + max) / 2;
        }
        else
        {
            min = mid + 1;
            mid = (min + max) / 2;
        }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;

    cin >> n;
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
        if (isThere(curr))
            cout << 1 << " ";
        else
            cout << 0 << " ";
    }
}
