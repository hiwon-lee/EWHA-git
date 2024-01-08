// 빠른 a+b
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        cout << a + b << "\n";
    }
}
