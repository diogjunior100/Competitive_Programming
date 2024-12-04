#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

const ll oo = {1000000000000000010LL};
const ll MAX = {200010};

void solve (string s1, string s2) {

    int j = 0;

    for (int i = s2.length()-1; i >= 0; i--){

        if (s2[i] != s1[j]) {
            cout << "NO" << endl;
            return ;
        }

        j++;
    }

    cout << "YES" << endl;
    
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s1, s2;

    cin >> s1 >> s2;

    solve(s1, s2);

    return 0;
}