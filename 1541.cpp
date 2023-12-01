// 잃어버린 괄호
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    // TODO : 먼저 입력을 어떻게 받을 지 생각
    // 1. 문자열로 받음?
    // 2. 숫자랑 기호를 번갈아담아
    string input;
    vector<int> number;
    vector<char> operation;

    cin >> input;

    string currNumString = "-1";

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
            }
        }
        else
        { // 숫자가 아닌 경우
            if (currNumString == "-1")
            { // 숫자를 벡터에 삽입한 경우, 연산자
                operation.push_back(element);
            }
            else
            { // 정의인 경우
                // stoi : 문자열을 숫자로 변환
                int getnum = 0;
                int idx = 0;
                for (int i = currNumString.length() - 1; i >= 0; i--)
                {
                    getnum += currNumString[idx++] * pow(10, i);
                }
                // currNumString = stoi(currNumString);
                number.push_back(getnum);
                getnum = 0;
                currNumString = "-1";
            }
        }
    }