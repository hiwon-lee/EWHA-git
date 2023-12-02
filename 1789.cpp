// 수들의 합
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    long s;
    cin >> s;

    long element = 1;

    while (true)
    {
        if (s - element <= element)
        {
            cout << element;
            break;
        }
        else
        {
            s -= element++;
            if (s == 0)
            {
                cout << element;
                break;
            }
        }
        // s = s - element;
    }

    // cout << 200 - (1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 + 11 + 12 + 13 + 14 + 15 + 16 + 17 + 18);
}