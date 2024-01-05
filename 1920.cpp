// 수 찾기
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<long> A;

// 이진 탐색해야될거같음
bool isExist(long num)
{
    int min = 0;
    int max = A.size() - 1;
    int mid = (min + max) / 2;

    while (min <= max)
    {

        if (A[mid] == num)
        {
            return true;
        }
        else if (A[mid] > num)
        {
            max = mid - 1;
            mid = (min + max) / 2;
        }
        else if (A[mid] < num)
        {
            min = mid + 1;
            mid = (min + max) / 2;
        }
    }

    return false;
}
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n, m;
    cin >> n;

    A.assign(n, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    sort(A.begin(), A.end());

    cin >> m;

    long curr;
    for (int i = 0; i < m; i++)
    {
        cin >> curr;
        if (isExist(curr))
        {

            cout << 1 << "\n";
        }
        else
        {

            cout << 0 << "\n";
        }
    }
}
