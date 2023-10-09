#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--) {
        int a, b, result; cin >> a >> b;
        if (a > b) {
            int swap = b;
            b = a;
            a = swap;
        }
        if (abs(a-b) <= 3) cout << 1 << endl;
        else {
            if (a % 2 != b % 2) {
                if (a % 2 == 0) a--;
                else b--;
            }
            result = (b - a) / 2;
            cout << result << endl;
        }
    }
    return 0;
}