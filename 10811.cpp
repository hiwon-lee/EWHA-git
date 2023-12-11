// 10811
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n, m;

    cin >> n >> m;

    int basket[n + 1];
    for (int i = 1; i < n + 1; i++)
    {
        basket[i] = i;
    }

    int temp = 0;
    int start, end;
    for (int i = 0; i < m; i++)
    {

        cin >> start >> end;
        for (int j = 0; j <= (end - start) / 2; j++)
        {
            temp = basket[start + j];
            basket[start + j] = basket[end - j];
            basket[end - j] = temp;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << basket[i] << " ";
    }
}