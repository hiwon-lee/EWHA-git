#include <iostream>
#include <string>
#include <list>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> s;
    cin >> n;
    list<char> l(s.begin(), s.end());
    auto curr = l.end();

    while (n--)
    {
        char order;
        cin >> order;

        switch (order)
        {

        case 'L':

            if (curr != l.begin())
            {
                curr--;
            }
            break;

        case 'D':

            if (curr != l.end())
            {
                curr++;
            }
            break;
        case 'B':

            if (curr != l.begin())
            {
                curr = l.erase(--curr);
            }
            break;
        case 'P':

            char c;
            cin >> c;
            l.insert(curr, c);
            break;
        }
    }
    for (auto it = l.begin(); it != l.end(); it++)
    {
        cout << *it;
    }
    return 0;
}
