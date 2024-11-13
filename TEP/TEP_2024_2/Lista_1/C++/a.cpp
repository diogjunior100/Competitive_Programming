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

    string p;

    cin >> p;


    for (ll i = 0; i < p.size(); i++)
    {
        if(p[i] == 'H' || p[i] == 'Q' || p[i] == '9'){
            cout << "YES" << endl;
            return 0;
        } 
    }
    
    cout << "NO" << endl;

    return 0;
}