// 수 정렬하기2
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> arr;

bool duplicateChecker(int ele)
{
    int min = 0, max = arr.size();
    int mid = (min + max) / 2;

    while (min <= max)
    {

        if (arr[mid] == ele)
        {
            return true;
        }
        else if (arr[mid] > ele)
        {
            max = mid - 1;
            mid = (min + max) / 2;
        }
        else
        {
            min = mid + 1;
            mid = (min + max) / 2;
        }
    }
    return false;
}
int main()
{
    int n;

    cin >> n;

    while (n--)
    {
        int ele;
        cin >> ele;

        arr.push_back(ele);
    }
    sort(arr.begin(), arr.end());

    for (auto e : arr)
    {
        printf("%d\n", e);
    }
}
