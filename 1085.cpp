//
#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    // 포인터 배열?
    int loc[4];

    int min = 1001;

    for (auto &ele : loc)
    {
        cin >> ele;
    }

    for (auto &ele : loc)
    {

        if (min > ele)
            min = ele;
    }

    // cin >> x >> y >> w >> h;

    if (min > abs(loc[2] - loc[0]))
        min = abs(loc[2] - loc[0]);
    if (min > abs(loc[3] - loc[1]))
        min = abs(loc[3] - loc[1]);

    cout << min;
}