// 그룹단어체커 -문자열
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool isGroupWord(string word)
{
    int wordSize = word.size();

    if (wordSize == 1)
        return true;

    string currstr;
    for (int i = 0; i < wordSize - 1; i++)
    {
        char curr = word.at(i);
        currstr = word.substr(i + 1);
        int idx = currstr.find(curr);
        if (idx == 0 || idx == string::npos)
        {
            continue;
        }
        else
        {

            return false;
        }
        }
    return true;
}

int main()
{
    int n;
    cin >> n;

    int cntWord = 0;

    for (int i = 0; i < n; i++)
    {
        string word;
        cin >> word;

        if (isGroupWord(word))
            cntWord++;
    }

    cout << cntWord;
}