#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// TODO
// 1. 로프별 하중을 입력받고
// 2. 내림차순 정렬?
// 3. 하나씩 추가하면서 최대하중을 계산
// 4. 최대값 출력

bool desc(int a, int b)
{
    return a > b;
}

int main()
{
    int n, weight;
    cin >> n;

    vector<int> rope(n);

    for (int i = 0; i < n; i++)
    {
        cin >> rope[i];
        // rope.at() : 범위 검사함
        // rope[]  : 범위 검사안함
    }

    sort(rope.begin(), rope.end(), desc);

    int max = -1;
    int totalWeight;
    for (int i = 0; i < n; i++)
    {
        // totalWeight += rope[i];
        // int curr = (totalWeight + rope[i + 1]) / (i + 1);
        int curr = rope[i] * (i + 1);

        if (max < curr)
        {
            max = rope[i] * (i + 1);
        }
    }

    cout << max;
}