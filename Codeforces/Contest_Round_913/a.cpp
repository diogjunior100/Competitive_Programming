#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

const ll oo = {1000000000000000010LL};
const ll MAX = {200010};

map<string, string> v;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin >> n;

    while (n--)
    {
        char col;
        ll row;

        cin >> col >> row;

        for (auto i = 1; i <= 8; ++i){
            if (i != row){
                cout << col << i << endl;
            }
        }
        
        for (char i = 'a'; i <= 'h'; ++i){
            if (i != col) {
                cout << i << row << endl;
            }
        }
    }
    

    
    return 0;
}