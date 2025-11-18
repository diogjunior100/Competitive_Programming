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

    vector<string> vs(n+1);
    string s;

    for (ll i = 0; i < n; i++){
        cin >> vs[i];
    }

    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < i; j++) {
            if (vs[i] == vs[j]) {
                cout << "No" << "\n";
                return 0;
            }
        }
    }

    for (ll i = 0; i < n; i++) {
        if (vs[i][0] != 'H' && vs[i][0] != 'D' && vs[i][0] != 'C' && vs[i][0] != 'S'){
            cout << "No" << "\n";
            return 0;
        } else if (vs[i][1] != 'A' && vs[i][1] != '2' && vs[i][1] != '3' && vs[i][1] != '4' && vs[i][1] != '5' && vs[i][1] != '6' && vs[i][1] != '7' && vs[i][1] != '8' && vs[i][1] != '9' && vs[i][1] != 'T' && vs[i][1] != 'J' &&vs[i][1] != 'Q' && vs[i][1] != 'K') {
            cout << "No" << "\n";
            return 0;
        }
    }  

    
    cout << "Yes" << endl;

    return 0;
}