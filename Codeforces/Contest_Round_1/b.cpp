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

    ll n,s,d;
    ll x, y;

    cin >> n >> s >> d;

    while (n > 0)
    {
        cin >> x >> y;

        if (x < s && y > d)
        {
            cout << "Yes" << endl;
            return 0;
        }
        n--;
    }
    
    cout << "No" << endl;

    return 0;
}