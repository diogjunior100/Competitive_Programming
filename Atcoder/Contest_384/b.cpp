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

    ll n, r, d,a;
    cin >> n >> r;

    for (ll i = 0; i < n; i++)
    {
        cin >> d >> a;

        if (d == 1){
            if (r >= 1600 && r <= 2799) {
                r = r + a;
            }
        } else {
            if (r >= 1200 && r <= 2399){
                r = r + a;
            }
        }
    }

    cout << r << endl;
    

    return 0;
}