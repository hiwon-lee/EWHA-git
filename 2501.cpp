#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> divisors;

    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            divisors.push_back(i);
            if (n / i != i)
            {
                divisors.push_back(n / i);
            }
        }
    }

    sort(divisors.begin(), divisors.end());

    if (divisors.size() < k)
    {
        cout << 0;
    }
    else
    {
        cout << divisors[k - 1];
    }

    // TODO
    // 1. 작은수부터 나누기
    // 2. 만약 나머지가 0이면 약수
    // 3.
}