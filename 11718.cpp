//
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    // getline함수를 이용하여 공백을 포함한 한 줄을 입력받아, 파람으로 입력된 변수에 저장
    string str;
    while (getline(cin, str))
    {
        cout << str << endl;
    }
}