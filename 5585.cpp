#include <iostream>

using namespace std;

int main()
{
    int a, q, curr, cnt;
    int arr[] = {500, 100, 50, 10, 5, 1};
    // 이렇게 배열로 안하고 500을 5로 나눈 몫으로 할수있다.

    cin >> a;

    cnt = 0;
    curr = 1000 - a;

    for (int i = 0; i < 6; i++)
    {
        q = curr / arr[i];
        cnt += q;

        curr = curr - q * arr[i];
    }

    cout << cnt;
}