#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--) {
        int a, b, result; cin >> a >> b;
        if (a > 2) {
            if (b % 2 == 0) 
                result = b/2;
            else 
                result = -1 * (b + 1) / 2;
            
            if (a % 2 == 0) 
                result -= -1 * a / 2;
            else 
                result -= (a - 1) / 2; 
        }
        else {
            if (b % 2 == 0) 
                result = b/2;
            else 
                result = -1 * (b + 1) / 2;
            if (a == 2)
                result++;
        }
        cout << result << endl;
    }
    return 0;
}