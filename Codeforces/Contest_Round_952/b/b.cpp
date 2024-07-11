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

    ll t;
    cin >> t;

    while (t != 0)
    {
        ll n;
        cin >> n;
        vector<pair<ll, ll>> values;

        for (ll i = 2; i <= n; i++)
        {
            ll sum = 0;

            for(ll j = 1; i*j <= n; j++){
                sum = sum + (i*j);
            }

            values.push_back({sum, i});
        }
        sort(values.begin(), values.end());
        cout << values.back().second << endl;
        t--;    
    }
    

    return 0;
}