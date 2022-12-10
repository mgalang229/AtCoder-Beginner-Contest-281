#include <bits/stdc++.h>
using namespace std;

/*

600
180 240 120
= 600 - 540 * (600 / 540)
= 600 - 540
= 60

180 420 540
60

281
94 94 94
= 281 - 282 * (281 / 282)
= 281

94 188 282
-----> 281

*/

int main() {
    int n;
    long long t;
    cin >> n >> t;
    int a[n];
    long long total = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total += a[i];
    }
    long long rem = t - total * (t / total);
    long cur_time = 0;
    for (int i = 0; i < n; i++) {
        cur_time += a[i];
        if (rem <= cur_time) {
            cout << i + 1 << " " << a[i] - cur_time + rem << "\n";
            break;
        }
    }
}
