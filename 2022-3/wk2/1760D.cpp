//
// Created by Anderson on 2023-02-23.
//
#include <bits/stdc++.h>

using namespace std;

#define pb push_back

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (i == 0 || x != a.back())
                a.pb(x);
        }
        int v = 0;
        for (int i = 0; i < a.size(); i++)
            if ((i == 0 || a[i - 1] > a[i]) && (i == a.size() - 1 || a[i] < a[i + 1]))
                v++;
        if (v == 1)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}
