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

    ll n,k;
    cin >> n >> k;

    vector<ll> v(n+1);

    for (ll i = 1; i <= n; i++){
        cin >> v[i];
    }

    for (ll i = 1; i <= k; i++){
        for (ll j = 1; j < n; j++){
            v[j] = v[j+1]; 
        }

        v[n] = 0;
    }

    for (ll i = 1; i <= n; i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;
    return 0;
}