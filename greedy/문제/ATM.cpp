#include<bits/stdc++.h>
using namespace std;

int temp, n, sum;
vector<int> arr;

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> temp;
        arr.push_back(temp);
    }
    sort(arr.begin(), arr.end()); // 오름차순으로 정렬하면 0부터 n까지 최선의 선택이 된다.
    temp = 0;
    for(int i = 0; i < n; i++) {
        temp += arr[i];
        sum += temp;
    }
    cout << sum;
}