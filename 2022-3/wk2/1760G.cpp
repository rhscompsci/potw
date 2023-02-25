//
// Created by Anderson on 2023-02-23.
//
#include <bits/stdc++.h>

using namespace std;

#define pb push_back

set<int> s;
const int z = 1e5 + 10;
vector<pair<int, int>> adj[z];
bool o = true;
int n, a, b;
void dfs1(int u, int p, int x) {
    if (u == b)
        return;
    s.insert(x);
    for (auto [h, i] : adj[u]) {
        int v = h, w = i;
        if (v == p) continue;
        dfs1(v, u, x ^ w);
    }
}
bool dfs2(int u, int p, int x) {
    if (u != b && s.count(x))
        return true;
    for (auto [h, i] : adj[u]) {
        int v = h, w = i;
        if (v == p) continue;
        if(dfs2(v, u, w ^ x)) return true;
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        s.clear();
        cin >> n >> a >> b;
        --a; --b;
        for (int i = 0; i < n; ++i)
            adj[i].clear();
        for (int i = 0; i < n - 1; ++i) {
            int u, v, w;
            cin >> u >> v >> w;
            --u; --v;
            adj[u].pb({v, w});
            adj[v].pb({u, w});
        }
        dfs1(a, -1, 0);
        if (dfs2(b, -1, 0))
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}