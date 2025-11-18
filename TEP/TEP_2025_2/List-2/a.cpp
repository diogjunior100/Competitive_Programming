#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

const ll oo = {1000000000000000010LL};
const ll MAX = {200010};

vector<ll> a;

void solve (ll n, ll k) {
    ll c, temp;

    for (int i = 0; i < n; i++) {
        cin >> temp;
        
        a.emplace_back(temp);
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < n; i++) {
        int sum = 0;

        for (int j = 0; j < n; j++) {
            if (a[j] >= a[i]) {
                sum++;
            }
        }

        if (sum >= k) {
            c = a[i];
        }

    }

    cout << c << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,k;

    cin >> n >> k;

    solve(n, k);

    return 0;
}