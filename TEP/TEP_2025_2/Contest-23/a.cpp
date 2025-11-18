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

    string s; int pos = -1;
    cin >> s;

    int tam = s.size();

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a'){
            pos = i;
        }
    }

    if (pos == -1){
        cout << -1 << endl;
    } else {
        cout << pos + 1 << endl;
    }

    return 0;
}