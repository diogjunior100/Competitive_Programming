#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;
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

    vector<ll> p(n), temp(n);
    vector<vector<ull>> result(1000000000); 

    for (ll i = 0; i < n; i++)
    {
        cin >> p[i];
        temp[i] = p[i];
    }
    

    sort(p.begin(), p.end()); 
    reverse(p.begin(), p.end());   
    ll j = 1, count, res;      

    do {
        count = 0;
        for (ull i = 0; i < p.size(); ++i) {
            //cout << p[i] << (i + 1 == p.size() ? '\n' : ' ');
            if (p[i] == temp[i]){
                count++;
            }
            result[j].emplace_back(p[i]);

            if (count == 3) {
                res = j;
                break;
            }
        }
        j++;
    } while (prev_permutation(p.begin(), p.end()));

    for (auto x : result[res+1]){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}