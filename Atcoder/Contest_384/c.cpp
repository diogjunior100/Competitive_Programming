#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

const ll oo = {1000000000000000010LL};
const ll MAX = {200010};

vector<ll> dp[MAX];

void allSums (){

    s[0] = array[0];
    dp[0] = s[0];
    k = 2;
    for(int i = 1; i < n; i ++)
    {
        s[i] = s[i-1] + k*array[i];
        dp[i] = dp[i-1] + s[i];
        k = k * 2;
    }
    return dp[n-1];
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    map<string, ll, ll> p;
    ll temp;

    for (ll i = 0; i < 5; i++)
    {
        switch (i)
        {
        case 0:
            cin >> temp;
            p.insert({"a", temp});
            break;
        case 1:
            cin >> temp;
            p.insert({"b", temp});
        case 2:
            cin >> temp;
            p.insert({"c", temp});
        case 3:
            cin >> temp;
            p.insert({"d", temp});
        case 4:
            cin >> temp;
            p.insert({"e", temp});
        }
    }

    
    
    
    

    return 0;
}