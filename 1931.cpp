// 회의실 배정
#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
#include <queue>
using namespace std;

struct cmp
{
    bool operator()(const pair<int, int> &a, const pair<int, int> &b)
    {
        return a.first > b.first; // 오름차순으로 정렬
    }
};
int main()
{
    int n;
    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> timeList;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int start, finish;
        cin >> start >> finish;

        timeList.emplace(make_pair(start, finish));
    }
    bool isPrevSync = timeList.top().first == timeList.top().second ? true : false;

    int prevEnd = timeList.top().second;
    int rst = isPrevSync ? 1 : 0;
    timeList.pop();

    bool passTerm = false;
    while (timeList.size())
    {
        if (passTerm)
        {

            if (prevEnd > timeList.top().first)
            {
                timeList.pop();
                continue;
            }
            else
            {
                passTerm = false;
            }
        }
        else
        { // 다음회의와 현재 회의 종료 시간이 같은 경우

            // if (prevEnd > timeList.top().second)
            //     prevEnd = timeList.top().second;
            if (timeList.top().first == timeList.top().second)
            { // 다음 회의의 종료와 시작이 같으면
                if (!isPrevSync)
                {
                    rst++;
                    isPrevSync = true;
                }
                else
                {
                    timeList.pop();
                    continue;
                }
                // cout << timeList.top().first << " " << timeList.top().second << endl;
            }
            else
            {
                prevEnd = timeList.top().second;
            }
        }

        if (prevEnd <= timeList.top().second)
        {
            prevEnd = timeList.top().second;
        }
        // isSync = false;
        timeList.pop();
    }

    cout << timeList.top().first << " " << timeList.top().second << endl;
}

cout << rst;
}