#include <iostream>
#include <set>

using namespace std;

int main() {
    set<string> s;
    string str;
    int n, m, result = 0;

    cin >> n >> m;

    while (n--) {
        cin >> str;
        s.insert(str);
    }

    while (m--) {
        cin >> str;
        if (s.find(str) != s.end()) {
            result++;
        }
    }
    cout << result << "\n";
}