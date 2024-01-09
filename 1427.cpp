// 소트인사이트
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(int a, int b)
{
    return a > b; // 내림차순
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr;

    // 2143 / 1000 = 2
    // 143 / 100 = 1
    // 43 / 10 = 4
    // 3

    // 2143 % 10 = 3
    // 2143 / 10 = 214
    // 214 % 10 = 4
    // 214 / 10 = 21
    // 21 % 10 = 1
    // 21 / 10 = 2
    // 2 % 10 = 2
    // 2 / 10 = 0

    // 2140 % 100 = 40

    while (n)
    {
        arr.push_back(n % 10);
        n /= 10;
    }
    sort(arr.begin(), arr.end(), cmp);

    for (auto ele : arr)
        cout << ele;
}
