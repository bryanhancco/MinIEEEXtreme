#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    string num; cin >> num;
    if (num.length() <= 1) {
        cout << 0 << endl;
    } else {
        cout << num[num.length()-2] << endl;
    }
    return 0;
}