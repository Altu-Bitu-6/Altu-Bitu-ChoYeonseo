#include <iostream>
#include <map>

using namespace std;

int main() {
    int t, n;
    string a, b;

    cin >> t;
    while (t--) {
        map<string, int> m;

        cin >> n;
        while (n--) {
            cin >> a >> b;
            m[b]++;
        }

        int result = 1;
        for (auto i = m.begin(); i != m.end(); i++)
            result *= (i->second + 1);

        cout << result - 1 << "\n";
    }
}