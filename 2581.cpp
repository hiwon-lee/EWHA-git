//
#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;

bool isPrime(int num)
{

    if (num == 2 || num == 3)
        return true;

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int m, n;
    vector<bool> prime(n + 1, false);

    cin >> m >> n;

    int sum = 0;
    int min = 999999;

    if (m == 1)
        m++;

    for (int i = n; i >= m; i--)
    {
        if (isPrime(i))
        {
            sum += i;
            min = i;
        }
    }

    if (sum)
    {

        cout << sum << endl
             << min;
    }
    else
    {
        cout << -1;
    }
}