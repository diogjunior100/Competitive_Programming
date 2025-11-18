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

    ll n,t, a;
    cin >> n;

    for (ll i = 0; i < n; i++) {
        cin >> t;
        ll sum = 0;
        for (ll j = 0; j < t; j++) {
            cin >> a;
            
            if (a & 1) {
                sum++;
            }
        }

        cout << sum << endl;
    }

    return 0;
}