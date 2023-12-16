//
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int hour, minite, time;

    cin >> hour >> minite >> time;

    hour += time / 60;
    minite += time % 60;

    if (minite >= 60)
    {
        hour += 1;
        minite -= 60;
    }

    if (hour >= 24)
    {
        hour = hour % 24;
    }

    cout << hour << " " << minite;
}