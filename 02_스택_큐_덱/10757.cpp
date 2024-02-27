#include <iostream>
#include <vector>

using namespace std;

int main() {
    string a, b, sum;
    int s, n[10001], m[10002];
    vector<int> v;

    cin >> a >> b;

    if (a.size() < b.size()) {
        swap(a, b);
    }

    for (int i = 0; i < a.size(); i++) {
        n[i+1] = a[i] - '0';
    }

	for (int i = 0; i < b.size(); i++) {
        m[i + 1 + (a.size() - b.size())] = b[i] - '0';
    }

	for (int i = a.size(); i > 0; i--) {
		s = n[i] + m[i];
		if (s >= 10) {
			n[i - 1]++;
			s -= 10;
		}
		v.push_back(s);
	}

	if (n[0] != 0) cout << 1;

	for (int i = v.size() - 1; i >= 0; i--) {
		cout << v[i];
	}
}