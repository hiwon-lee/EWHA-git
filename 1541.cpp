// 잃어버린 괄호
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
int getNum(string currNumString)
{
    int getnum = 0;
    int idx = 0;
    for (int i = currNumString.length() - 1; i >= 0; i--)
    {
        // cout << "calc" << currNumString[idx++] << endl;
        // cout << "getnum1 :" << getnum << endl;

        getnum += (currNumString[idx++] - 48) * pow(10, i);
        // cout << "getnum2 :" << getnum << endl;
    }

    return getnum;
}
int main()
{
    // TODO : 먼저 입력을 어떻게 받을 지 생각
    // 1. 문자열로 받음?
    // 2. 숫자랑 기호를 번갈아담아
    string input;
    int rst = 0;
    vector<int> number;
    vector<char> operation;

    cin >> input;

    string currNumString = "-1";
    int tempNum = 0;
    bool isPrevMinus = false;

    for (auto &element : input)
    {
        if (isdigit(element))
        { // 숫자인 경우
            if (currNumString == "-1")
            { // 미정의인 경우
                currNumString = element;
            }
            else
            { // 정의인 경우
                currNumString += element;
                cout << currNumString << endl;
            }
        }
        else
        { // 연산자인 경우
            cout << "temp num" << tempNum << endl;
            currNumString = "-1";
            if (element == '+')
            {
                tempNum += getNum(currNumString);
                isPrevMinus = false;
            }
            else
            {
                if (!isPrevMinus)
                { // 이전에 마이너스가 아닌경우
                    rst += tempNum;
                    // currNumString = "-1";

                    // tempNum = 0;
                    isPrevMinus = true;
                    cout << "rst after" << rst << endl;
                }
                else
                {
                    // tempNum += getNum(currNumString);
                    // currNumString = "-1";

                    rst -= tempNum;
                    isPrevMinus = false;
                    cout << "rst prevminus " << rst << endl;
                }
                tempNum = 0;
                currNumString = "-1";
                isPrevMinus = true;
            }
        }
    }
    tempNum += getNum(currNumString);
    cout << "final" << tempNum << endl;

    if (isPrevMinus)
        rst -= tempNum;
    else
        rst += tempNum;
    cout << rst;
}