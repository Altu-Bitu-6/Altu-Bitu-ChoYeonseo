#include <iostream>

using namespace std;

int main() {
    int n, k, s, idx = 0;
    cin >> n >> k;
    char C[25], c;
    
    for (int i = 0; i < n; i++) {
        C[i] = '?';
    }

    for (int i = 0; i < k; i++) {
        cin >> s >> c;
        idx += s;
        idx %= n;
        if (C[idx] == '?' || C[idx] == c) {
            C[idx] = c;
        } else {
            cout << "!";
            return 0;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (C[i] != '?' && C[i] == C[j]) {
                cout << "!";
                return 0;
            }
        }
    }

    for (int i = n; i > 0; i--) {
        cout << C[(idx+i)%n];
    }
}