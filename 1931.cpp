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
    // 회의 시작과 끝나는 시간
    // 회의가 겹치지 않게하면서 회의실을 사용할 수 잇는 회의의 최대개수
    // 회의가 시작과동시에 끝날 수 잇음

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int start, finish;
        cin >> start >> finish;

        timeList.emplace(make_pair(start, finish));

        // timeList.push(start, finish);

        // 회의실 정보 받기
        // TODO : 어떤 자료구조를 사용할지..
        // pair? heap?
    }

    int time = timeList.top().second;
    int rst = 0;

    // 시작 시간을 오름차순으로 정렬한 후, 0

    // 끝나는 시간을 비교하고
    // 더 작은 끝나는 시간이 나오면 temp에 저장
    for (int i = 0; i < timeList.size(); i++)
    {
        // cout << timeList.top().first << " " << timeList.top().second << endl;
        // pair<int, int> currElement = timeList.pop();
        if (time <= timeList.top().second)
        {
            rst++;
        }
        timeList.pop();
    }
    // 바꿀 수 없으면 (끝나는 시간이 같거나 더 크면)
    // rst++;
    // 위의 과정 반복

    cout << rst;

    //
}