// 설탕배달
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n, rst = 0;

    cin >> n;

    int max = n / 5;

    int rest;

    if (n <= 5)
    {
        if (n == 3 || n == 5)
            cout << 1;
        else
            cout << -1;
    }
    else
    {
        while (true)
        {
            rest = n - max * 5;
            if (rest % 3 == 0)
            {
                cout << max + rest / 3;
                break;
            }
            if (max == 0)
            {
                cout << -1;
                break; // 반복문 멈추는걸 잘 챙기자
            }
            max--;
        }
    }
}