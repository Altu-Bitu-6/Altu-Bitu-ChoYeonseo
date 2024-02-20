#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t, n, x, y;

    cin >> t;
    while (t--) {
        cin >> n;
        
        vector<pair<int, int>> rank;
        
        for (int i = 0; i < n; i++) {
            cin >> x >> y;
			rank.push_back(make_pair(x, y));
        }
        
        sort(rank.begin(), rank.end());
        
        int tmp = 0;
        int result = 1;
        
        for (int i = 1; i < n; i++) {
            if (rank[tmp].second > rank[i].second) {
                result++;
                tmp = i;
            }
        }
        cout << result << "\n";
    }
}