#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int N = 9;

void select(vector<int> &arr) {
    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += arr[i];
    }

    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if ((sum - arr[i] - arr[j]) == 100) {
                arr.erase(arr.begin() + j);
                arr.erase(arr.begin() + i);
                return;
            }
        }
    }
}

int main() {
    // 입력
    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // 연산
    select(arr);
    sort(arr.begin(), arr.end());

    // 출력
    for (auto it: arr) {
        cout << it << "\n";
    }
}