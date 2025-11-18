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

    vector<ll> as(n+10);
    
    for (ll i = 1; i <= n; i++){
        cin >> as[i];
    }

    int flag;
    ll result = as[1] + as[n];

    for (ll i = 2; i <= n-1; i++){
        
        if (result == (as[i] + as[n - (i-1)])){
            
            break;
        } else {
            flag = 1;
        }
        n--;
    }

    cout << ((flag == 1) ? "S" : "N") << "\n"; 

    return 0;
}
