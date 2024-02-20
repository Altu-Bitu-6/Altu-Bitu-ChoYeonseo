#include <iostream>
#include <cmath>

using namespace std;
int main() {
    int w, b, din, dout, t, d;

    cin >> w >> b >> t;
    cin >> d >> din >> dout;

    int w1 = w, w2 = w, b2 = b;

    for (int i = 0; i < d; i++) {
        w1 += din - (b + dout);
        w2 += din - (b2 + dout);

        if (abs(din - (b2 + dout)) > t)
            b2 += floor((din - (b2+dout))/2.0);
    }

    if (w1 <= 0)
        cout << "Danger Diet\n";
        
    else
        cout << w1 << " " << b << "\n";

    if (w2 <= 0 || b2 <= 0)
        cout << "Danger Diet\n";

    else {
        cout << w2 << " " << b2 << " ";

        if (b - b2 > 0)
            cout << "YOYO";

        else
            cout << "NO";
    }
}