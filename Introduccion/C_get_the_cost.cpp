#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--) {
        int a, b, n; cin >> a >> b >> n;
        a *= n;
        b *= n;
        if (b >= 100) {
            a += floor(b/100);
            b %= 100;
        }
        cout << a << " " << b << endl;
    }
    return 0;
}