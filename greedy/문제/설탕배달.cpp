#include<bits/stdc++.h>
using namespace std;

int n, answer;

int main() {
    cin >> n;
    while(n >= 0) {
        if(n % 5 == 0) { // 5로 나누는게 가장 유리한 선택
            answer += (n / 5);
            cout << answer;
            return 0;
        }
        n -= 3; // 5로 나눌 수 없다면 그 다음 선택인 3을 뺌
        answer++; // 봉지 + 1
    }
    cout << -1;
}