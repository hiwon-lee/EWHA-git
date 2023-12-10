//
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int rest[42] = {0};

    for (int i = 0; i < 10; i++)
    {
        int element;
        cin >> element;
        if (rest[element % 42] == 0)
        {
            rest[element % 42] = 1;
        }
    }

    int rst = 0;

    for (auto &ele : rest)
    {
        rst += ele;
    }

    cout << rst;
}