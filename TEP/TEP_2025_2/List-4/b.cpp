#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

const ll oo = {1000000000000000010LL};
const ll MAX = {200010};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<ll> right, left;

    string s;
    cin >> s;

    ll pos = 1;
    for (auto c : s) {
        if (c == 'r') {
            right.emplace_back(pos);
            pos++;
        } else {
            left.emplace_back(pos);
            pos++;
        }
    }


    for (auto c : right) {
        cout << c << "\n";
    }

    reverse(left.begin(), left.end());
    for (auto c : left) {
        cout << c << "\n";
    }


    return 0;
}