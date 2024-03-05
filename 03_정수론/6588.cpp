#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
	cin.tie(0);

    bool* a = new bool[1000001];
    
    a[0] = true;
	a[1] = true;
	
	for (int i = 2; i * i < 1000001; i++){
		if (a[i] == true)
			continue;
		for (int j = i * i; j < 1000001; j += i){
			a[j] = true;
		}
	}

    int n;
    while (1) {
        cin >> n;
        if (n == 0) break;
        for (int i = 3; i < n; i+=2) {
            if (!a[i] && !a[n-i]) {
                cout << n << " = " << i << " + " << n-i << "\n";
                break;
            }
        }
    }
}