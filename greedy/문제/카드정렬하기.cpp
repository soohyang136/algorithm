#include<iostream>
#include<queue>
using namespace std;

int n, answer, temp, cnt;
priority_queue<int> pq;


int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> temp;
        pq.push(-temp); //카드를 숫자가 적은 순으로(-붙인 이유) pq에 넣기
    }
    while(!pq.empty()) {
        if(cnt == n-1) break; //카드 다 체크했는지 확인

        //카드 두개 묶기
        int num1 = -pq.top(); pq.pop(); 
        int num2 = -pq.top(); pq.pop();

        answer = answer += (num1 + num2); // 묶은 카드 더하기
        pq.push(-(num1+num2)); // 묶은 값 다시 pq에 넣어서 앞으로의 값에 반영하기
        cnt++; // 비교횟수 ++
    }
    cout << answer;
}
