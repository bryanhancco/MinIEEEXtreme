#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    string operation; cin >> operation;
    int num1, num2, result, count = 0; char op;
    for (char c : operation) {
        if (!isdigit(c)) {
            op = c;
            break;
        }
        count++;
    }
    num1 = stoi(operation.substr(0,count));
    num2 = stoi(operation.substr(count+1));   
    switch(op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
    }
    cout << result << endl;
    return 0;
}