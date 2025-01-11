#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

const ll oo = {1000000000000000010LL};
const ll MAX = {200010};

string smap (const string& s, const function <char(char)> & f) {
    string y;

    for (const auto& c : s) {
        y.push_back(f(c));
    }

    return y;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s = "Teste de mapeamento";
    cout << smap(s, [](char c) { return (char) toupper(c); }) << '\n';

    return 0;
}