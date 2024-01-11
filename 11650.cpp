// 좌표 정렬하기
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp (pair<int,int> a, pair<int,int> b) {
    if(a.first == b.first) {
        return a.second <b.second;
    }

    return a.first < b.first;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  cout.tie(NULL);
    int n;
    vector<pair<int,int>> coordinate;
    cin >>n;
    while(n--) {
        int x,y;
        cin >> x >> y;

        coordinate.push_back(make_pair(x,y));
    }

    sort(coordinate.begin(), coordinate.end(), cmp);


    for(auto ele: coordinate) {
        cout << ele.first <<" "<< ele.second <<"\n";
    }
}
