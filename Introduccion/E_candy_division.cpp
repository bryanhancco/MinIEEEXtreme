#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--) {
        int n, k, result; cin >> n >> k;
        result = (n % k == 0) ? 0 : k - (n % k);
        cout << result << endl;
    }
    return 0;
}