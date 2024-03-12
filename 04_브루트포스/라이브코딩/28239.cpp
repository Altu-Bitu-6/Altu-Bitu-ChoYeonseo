#include <iostream>
using namespace std;

typedef long long ll;
const int MAX = 60;
pair<int, int> getPair(int m) {
    int x, y;
    // m == 제곱수
    // x == y
    // m = 2^i -> x = y = i-l
    for (ll i = 1; i < MAX; i++) {
        if (m == ((ll)i << i)) {
            return {i-1, i-1};
        }
    }

    // m != 제곱수
    // m = 2^x + 2^y (x <= y)
    for (x = 0; x < MAX; x++) { // m = 100010 2^x = 000010 2^y = 100000 x = 1 y = 5
        if (m & ((ll)1 << x)) {
            m -= (ll)1 << x;
            break;
        }
    }
    for (y = x + 1; y < MAX; y++) {
        if (m & ((ll)1 << y)) {
            break;
        }
    }
    return {x, y};
}

int main() {
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    while (n--) {
        int m;
        cin >> m;
        pair<int, int> ans = getPair(m);
        cout << ans.first << " " << ans.second << "\n";
    }
}