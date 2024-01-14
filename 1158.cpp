// 요세푸스 문제
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k;
    cin >> n >> k;

    queue<int> q;

    for (int i = 1; i <= n; i++)
    {
        q.push(i);
    }

    cout << "<";

    while (q.size() > 1)
    {
        for (int i = 1; i < k; i++)
        {
            int temp = q.front();
            q.pop();
            q.push(temp);
        }
        cout << q.front() << ", ";
        q.pop();
    }
    cout << q.front() << ">";

    // vector -> 시간초과 남
    // ========================
    vector<int> arr1;

    for (int i = 1; i <= n; i++)
    {
        arr1.push_back(i);
    }

    int checker = 1;
    // cout << "<";
    vector<int> result;
    while (arr1.size())
    {
        if (checker == k)
        {
            result.push_back(arr1.front());
            // cout << arr1.front() << ", ";
            checker = 1;
        }
        else
        {
            int temp = arr1.front();
            arr1.push_back(temp);
            checker++;
        }
        arr1.erase(arr1.begin());
    }

    cout << "<";
    for (int i = 0; i < n; i++)
    {
        cout << result[i];
        if (i < n - 1)
            cout << ", ";
    }
    cout << ">";

    //============================
    // O(N^2), array
    int arr[n];
    fill_n(arr, n, 1);

    int turn = 0, cnt = 0;
    int chk = 0;
    // while (cnt != n)
    // {

    //     if (arr[turn % n])
    //     { // 출력한적이 없다면
    //         if (chk == k)
    //         {
    //             int ele = turn % n ? turn % n : n; // 차례일 때
    //             cout << (turn % n) << endl;        // 출력해줘
    //             arr[turn % n] = 0;
    //             chk = 1;
    //             cnt++;
    //             continue;
    //         }
    //         else
    //         {
    //             chk++;
    //         }
    //     }
    //     turn++;
    //     // else
    //     // { // 출력한 적이 있다면
    //     //     turn++;
    //     // }
    // }
    // // cout << "test" << arr[3] << endl;
}
