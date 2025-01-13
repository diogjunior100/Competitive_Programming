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

    if (regex_match("123.456.789-10", regex("([0-9]{3}\\.){2}[0-9]{3}-[0-9]{2}")))
        cout << "CPF ok\n";

    string s { "# Cpp regex example 2" };
    regex r { "([aeiou][ˆaeiou ]){2}" };
    smatch sm;
    
    if (regex_search(s, sm, r))
        cout << "Match: '" << sm[0] << "' on index " << sm.prefix().length() << '\n';

    return 0;
}