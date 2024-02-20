#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int> &v) {
    int len = v.size();

    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (v[j] > v[j+1]) {
                swap(v[j], v[j+1]);
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> v;
    v.assign(n, 0);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    bubbleSort(v);

    for (int i = 0; i < n; i++) {
        cout << v[i] << ' ';
    }
}