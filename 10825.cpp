// 국영수
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


struct student
{
    /* data */
    int kor, eng, math;
    string name;

};
bool cmp(student a, student b) {
    // 국영수 점수
    // 국어 점수가 감소하는 순서
    // 국어 점수 == 영어 점수 > 수학 점수가 감소하는 순서
    // 국 == 영 == 수 > 사전이름순
     if (a.eng == b.eng && a.kor == b.kor && a.math == b.math) {
        return a.name < b.name;
    }
    
    if (a.eng == b.eng && a.kor == b.kor) {
        return a.math > b.math;
    }
if(a.kor == b.kor) {
        return a.eng < b.eng;
    }

   



    return a.kor > b.kor;

}


int main()
{
    int n;

    cin >> n;
    struct student info[n];

    for(int i = 0; i < n; i++) {
        
        cin >> info[i].name >> info[i].kor >> info[i].eng >> info[i].math;


    }

    sort(info, info+n-1, cmp);

    for(auto name : info) {
        // cout << name.name << " "<<name.kor << " " << name.eng << " " <<name.math<<"\n";
        cout << name.name <<"\n";
    }
}
