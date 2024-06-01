#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

const ll oo = {1000000000000000010LL};
const ll MAX = {200010};

bool compare(const pair<string, int>& a, const pair<string, int>& b) {
    return a.second < b.second;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin >> n;

    vector<pair<string, int>> m(n);

    for (ll i = 0; i < n; i++)
    {
        string mountain;
        ll height;
        cin >> mountain >> height;
        m[i] = make_pair(mountain, height);
    }
    
    sort(m.begin(), m.end(), compare);


    cout << m[n-2].first << endl;
    return 0;
}