//
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string word;
    cin >> word;

    transform(word.begin(), word.end(), word.begin(), ::toupper);
}