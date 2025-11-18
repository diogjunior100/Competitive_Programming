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

    ll value = 1;

    for (ll i = 0; i < n; i++) {
        if ((value * 2) < (value + k)) {
            value *= 2;
        } else {
            value += k;
        }
    }

    cout << value << "\n";
    return 0;
}