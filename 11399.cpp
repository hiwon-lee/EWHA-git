// ATM
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n, rst = 0;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int turn = 0;
    while (n != turn)
    {
        rst += arr[turn] * (n - turn++);
    }

    cout << rst;
}