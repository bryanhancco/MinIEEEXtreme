#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--) {
        int a, b, l, n, result; cin >> a >> b >> l >> n;
        result = a * (2 * n - 1) + 2 * b * (n - 1) + 2 * l;
        cout << result << endl;
    }
    return 0;
}