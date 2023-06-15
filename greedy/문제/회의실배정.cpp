#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n, answer=1, startTime, endTime;
vector<pair<int, int>> times;

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> startTime >> endTime;
        times.push_back(make_pair(endTime, startTime)); // 정렬 할 때 first가 기준이므로 끝나는 시간을 뒤에 넣음
    }
    sort(times.begin(), times.end()); 
    endTime = times[0].first;
    for(int i = 1; i < n; i++) {
        if(times[i].second >= endTime) { // 회의 끝나는 시간과 시작하는 시간이 적절한지 판단
            endTime = times[i].first;
            answer++;
        }
    }
    cout << answer;
}
