//
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int idx;
    int maxValue = 0;
    for (int i = 1; i < 10; i++)
    {
        int curr;
        cin >> curr;

        if (maxValue < curr)
        {
            maxValue = curr;
            idx = i;
        }
    }

    cout << maxValue << endl
         << idx;
}