#include <bits/stdc++.h>
using namespace std;

bool IsValid(string s) {
    int num = 0;
    for (int i = 0; i < s.size(); i++) {
        if (!isdigit(s[i])) {
            return false;
        }
        num = num * 10 + (s[i] - '0');
    }
    return 100000 <= num && num <= 999999;
}

int main() {
    string s;
    cin >> s;
    int n = s.size();
    bool valid = true;
    if (isdigit(s[0]) || isdigit(s[n-1])) {
        valid = false;
    }
    string num = s.substr(1, n - 2);
    if (num.size() != 6 || !IsValid(num)) {
        valid = false;
    }
    cout << (valid ? "Yes" : "No") << "\n";
}
