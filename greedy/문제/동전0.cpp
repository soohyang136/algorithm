#include<bits/stdc++.h>
using namespace std;

int n, m, sum;
int arr[11];

int main() {
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = n - 1; i >= 0; i--) { // 가장 큰 동전부터 가장 최선의 선택
        sum += m / arr[i];
        m = m % arr[i];
    }
    cout << sum;
}