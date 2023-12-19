//
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int casenum;
    vector<int> vec;

    cin >> casenum;

    for (int i = 0; i < casenum; i++)
    {
        int a, b;
        cin >> a >> b;
        vec.push_back(a + b);
    }

    for (int i = 1; i <= casenum; i++)
    {
        cout << "Case #" << i << ": " << vec.at(i - 1) << endl;
    }
}