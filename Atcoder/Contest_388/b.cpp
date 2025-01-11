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

    ll n, d, t, l;
    cin >> n >> d;

    vector<ll> ts;
    vector<ll> ls;

    for (ll i = 0; i < n; i++){
        cin >> t;
        ts.push_back(t);
        cin >> l;
        ls.push_back(l);
    }

    ll maior = 0, result;
    for (ll j = 1; j <= d; j++) {
        for (ll i = 0; i < n; i++)
        {
            result = ts[i] * (ls[i] + j);
            if (result > maior) {
                maior = result;
            }
        }
        cout << maior << endl;
        maior = 0;
    }
    
    return 0;
}