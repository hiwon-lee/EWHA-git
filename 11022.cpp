//
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int rst = 0;
    for (int i = 1; i <= n; i++)
    {
        rst += i;
    }
    cout << rst;
    // printf("%d * %d = %d\n", n, i, n * i);
}
