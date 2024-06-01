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

    vector<ll> v(3);

    for (ll i = 0; i < 3; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    if ((v[1] - v[0]) == (v[2] - v[1]))
    {
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    
    
    return 0;
}