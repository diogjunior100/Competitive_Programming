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

    string s;
    int result, n;
    char last = ' ';

    cin >> n >> s;

    for (auto& c : s)
    {
        if (c == last)
        {
            ++result;
        } else {
            last = c;
        }
    }

    cout << result << endl;

    return 0;
}