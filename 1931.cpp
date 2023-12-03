// 회의실 배정
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    int n;
    priority_queue<pair<int, int>> timeList;
    // 회의 시작과 끝나는 시간
    // 회의가 겹치지 않게하면서 회의실을 사용할 수 잇는 회의의 최대개수
    // 회의가 시작과동시에 끝날 수 잇음

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int start, finish;
        cin >> start >> finish;

        timeList.push(make_pair(start, finish));

        // 회의실 정보 받기
        // TODO : 어떤 자료구조를 사용할지..
        // pair? heap?
    }

    int tempTime = -1;
    int rst = 0;

    // 시작 시간을 오름차순으로 정렬한 후, 0
    // 끝나는 시간을 비교하고
    // 더 작은 끝나는 시간이 나오면 temp에 저장
    // 바꿀 수 없으면 (끝나는 시간이 같거나 더 크면)
    // rst++;
    // 위의 과정 반복

    //
}