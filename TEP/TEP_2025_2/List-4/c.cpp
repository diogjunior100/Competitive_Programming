#include <bits/stdc++.h>

using namespace std;
using ll = unsigned long long;
using pll = pair<ll, ll>;

const ll oo = {1000000000000000010LL};
const ll MAX = {200010};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n, t, x,c;
    queue<pair<ll, ll>> q;

    cin >> n;

    while (n--) {
        cin >> t;

        if (t == 1) {
            cin >> x >> c;

            q.push({x, c});
        } else {
            cin >> c;
            ll removed_sum = 0;
            while (c > 0) {
                if (q.front().second >= c) {
                    removed_sum += q.front().first * c;
                    q.front().second -= c;
                    c = 0;
                } else {
                    removed_sum += q.front().first * q.front().second;
                    c -= q.front().second;
                    q.pop();
                }
            }
            cout << removed_sum << "\n";
        }
    }    


    return 0;
}