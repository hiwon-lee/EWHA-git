//
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    while (true)
    {
        if (a == 0 && b == 0)
            break;
        if (a % b == 0)
        {
            cout << "multiple" << endl;
        }
        else if (b % a == 0)
        {

            cout << "factor";
        }
        else
            cout << "neither";
    }
}