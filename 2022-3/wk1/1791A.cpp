//
// Created by Anderson on 2022-3-02-23.
//
#include <bits/stdc++.h>

using namespace std;



int main() {
    const string s = "codeforces";
    int n;
    cin >> n;
    while(n--) {
        char c;
        cin >> c;
        if (s.find(c) != string::npos)
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
    }
    return 0;
}

