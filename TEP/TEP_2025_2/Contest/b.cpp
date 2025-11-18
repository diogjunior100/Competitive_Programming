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

    ll h,w;
    cin >> h >> w;

    string matrix[h+1][w+1];

    for (ll i = 0; i < h; i++) {
        for (ll j = 0; j < w; j++) {
            cin >> matrix[i][j];
        }
    }



    return 0;
}