#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

int n, k, m, v, c, idx;
long long int answer;
priority_queue<int> pq;
vector<int> bags;
vector<pair<int, int>> jewels;
int visited[300001];

int main() {
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        cin >> m >> v;
        jewels.push_back(make_pair(m, v));
    }
    for(int i = 0; i < k; i++) {
        cin >> c;
        bags.push_back(c);
    }
    sort(jewels.begin(), jewels.end()); //무게가 낮은 순으로 정렬
    sort(bags.begin(), bags.end()); //담을 수 있는 무게가 낮은 순으로 정렬

    for(int i = 0; i < k; i++) { // 가방 하나씩 고름
        while(idx < n && bags[i] >= jewels[idx].first) { // 현재 가방에 담을 수 있는 보석 pq에 추가
            pq.push(jewels[idx++].second);
        }
        if(!pq.empty()) { // pq에 값이 있다면 그중 가장 비싼 보석 값 answer에 더함
            answer += pq.top(); pq.pop();
        }
    }
    cout << answer;
}
