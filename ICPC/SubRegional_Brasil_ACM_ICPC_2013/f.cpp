#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

const ll oo = {1000000000000000010LL};
const ll MAX = {200010};

void solve(ll n){
    ll sum = 0;

    for (auto i = 0; i < n; i++)
    {
        ll temp;
        cin >> temp;

        sum = sum + temp;
    }
    ll result1 = (sum % (n)) % 3;

    ll result = (sum % (2*n)) % 3;

    cout << ((result + result1) == 0 ? 1 : result % 3) << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n;
    //cin >> n;

    while (cin >> n)
    {
        if(n == 0) cout << 0 << endl;
        else solve(n);
    }
    

    return 0;
}