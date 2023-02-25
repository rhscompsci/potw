//
// Created by Anderson on 2023-02-23.
//
#include <bits/stdc++.h>

using namespace std;


static auto solve() {
    array<short, 3> a{};
    cin >> a[0] >> a[1] >> a[2];
    sort(a.begin(), a.end());
    cout << a[1] << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    short t;
    cin >> t;
    while (t--)
        solve();
}