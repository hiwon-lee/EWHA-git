//
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int test;
    cin >> test;
    vector<int> v;
    for (int i = 0; i < test; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back(a + b);
    }

    for (auto &e : v)
    {
        cout << e << endl;
    }
}