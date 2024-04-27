#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ii = pair<ll, ll>;

const ll oo = {1000000000000000010LL};
const ll MAX = {200010};
ll b;

vector<ll> path;

bool dfs(ll a){
    if (a > b){
        return false;
    }
    if (a == b){
        return true;
    }

    ll multiply = 2 * a;
    ll append = (10 * a) + 1;

    bool r1 = dfs(multiply);
    bool r2 = dfs(append);

    if ( r1 || r2 ){
        path.push_back((r1 ? multiply : append));
        return true;
    }
    
    return false;
}

void solve(ll a){
    bool result = dfs(a);
    path.push_back(a);

    if (result ){
        cout << "YES" << endl;
        cout << path.size() << endl;

        reverse(path.begin(), path.end());

        for (auto it : path)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll a;
    cin >> a >> b;

    solve(a);

    return 0;
}
