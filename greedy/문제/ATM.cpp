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
    sort(arr.begin(), arr.end());
    temp = 0;
    for(int i = 0; i < n; i++) {
        temp += arr[i];
        sum += temp;
    }
    cout << sum;
}