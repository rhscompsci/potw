#include <bits/stdc++.h>

using namespace std;

static auto digit_sum(int &i) {
    auto r{0};
    do {
        r += i % 10;
    } while (i /= 10);
    return r;
}

static auto query(vector<int> &a, set<int> &s, const int &i) {
    if (i == 1) {
        int l, r;
        cin >> l >> r;
        --l; --r;
        auto b{l};
        while (!s.empty()) {
            auto t = s.lower_bound(b);
            auto p{*t};
            if (t == s.end()|| p > r)
                break;
            a[p] = digit_sum(a[p]);
            s.erase(t);
            if (a[p] > 9)
                s.insert(p);
            b = p + 1;
        }
    }
    else {
        int x;
        cin >> x;
        --x;
        cout << a[x] << '\n';
    }
}

static auto solve() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    set<int> s;
    for (auto i{0}; (i <=> n) < nullptr; ++i) {
        cin >> a[i];
        if (a[i] > 9)
            s.insert(i);
    }
    int i;
    while (q--) {
        cin >> i;
        query(a, s, i);
    }
}

int main() {
    int t;
    cin >> t;
    while (t--)
        solve();
}