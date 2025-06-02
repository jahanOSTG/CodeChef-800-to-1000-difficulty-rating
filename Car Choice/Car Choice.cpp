#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, x1, x2, y1, y2;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> x1 >> x2 >> y1 >> y2;


        double cost1 = (double)y1 / x1;
        double cost2 = (double)y2 / x2;

        if (cost1 < cost2) {
            cout << -1 << endl;
        } else if (cost1 == cost2) {
            cout << 0 << endl;
        } else {
            cout << 1 << endl;
        }
    }
    return 0;
}
