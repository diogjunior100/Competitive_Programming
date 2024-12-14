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
    char c1, c2; 
    string s;
	cin >> n >> c1 >> c2;
    cin >> s;

    for (ll i = 0; i < n; i++)
    {
        if (s[i] != c1) {
            s[i] = c2;
        }
    }
    
    cout << s << endl;

    return 0;
}
