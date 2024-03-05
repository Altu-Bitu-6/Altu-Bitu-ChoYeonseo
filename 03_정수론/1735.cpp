#include <iostream>

using namespace std;

int main() {
    int a1, b1, a2, b2, n, m, o, p, q;
    cin >> a1 >> b1 >> a2 >> b2;

    n = (a1 * b2) + (a2 * b1);
    m = b1 * b2;
    p = n;
    q = m;

    while (q != 0) {
        o = p % q;
        p = q;
        q = o;
    }

    cout << n/p << " " << m/p;
}