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

    while (n != 0)
    {
        string s1, s2, news1, news2;

        cin >> s1 >> s2;

        news1 = s1;
        news1[0] = s2[0];

        news2 = s2;
        news2[0] = s1[0];

        cout << news1 << " " << news2 << endl;
        n--;
         
    }
    

    return 0;
}