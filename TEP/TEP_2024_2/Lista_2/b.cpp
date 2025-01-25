#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

const ll oo = {1000000000000000010LL};
const ll MAX = {200010};

void solve (vector<string> vtr, ll n) {
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        sort(vtr[i].begin(), vtr[i].end());
        do
        {
            cout << vtr[i].c_str();
            if(vtr[i].c_str() == vtr[i+1]){
                sum++;
            }
        } while (next_permutation(vtr[i].begin(), vtr[i].end()));
        cout << vtr[i].c_str();
    }
    
    cout << sum << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<string> vtr;
    string s;

    while (n != 0){
        cin >> s;
        vtr.push_back(s);
        n--;
    }

    solve(vtr, n);
    

    return 0;
}