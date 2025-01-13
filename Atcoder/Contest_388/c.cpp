include <bits/stdc++.h>

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

    ll n;
    cin >> n;
    vector<ll> v(n+1);

    for (size_t i = 0; i < n; i++){
        cin >> v[i];
    }

    ll result = 0;
    for (auto i : v) {
        auto it = upper_bound(v.begin(), v.end(), i/2);
        result += it - v.begin();
    }
        
    cout << result << endl;

    return 0;
}
