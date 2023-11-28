// 한수
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool isLimit(int limitnum, int curr)
{
    bool limit = false;
    if (limit < curr)
        true;
    return limit;
}

// dp 문제 푸는것마냥 풀어야 돼
int main()
{
    int n, cnt = 0;
    cin >> n;
    // vector<int> arr(n);

    // 몆자리 수인가
    int volumn = n / 100;

    if (volumn < 1)
    { // 만약 한,두자리면
        cout << n;
    }
    else
    {
        cnt = 99;
        int curr = 111;
        while (curr <= n)
        {
            if ((curr / 100 - (curr / 10) % 10) == ((curr / 10) % 10 - (curr % 10)))
            {
                cnt++;
            }
            curr++;
        }
        cout << cnt;
    }
}