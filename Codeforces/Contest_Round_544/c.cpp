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

    ll n;
    cin >> n;

    vector<ll> s(n);

    
    for (ll i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    
    sort(s.begin(), s.end());

    ll left = 0;
    ll max_s = 0;

    for (ll i = 0; i < n; i++)
    {
        while ((s[i] - s[left]) > 5)
        {
            left++;
        }
        
        max_s = max(max_s, i - left + 1);
    }
    
    cout << max_s << endl;    

    return 0;
}