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

    string text { "cesar cipher xyz" };
    string cipher;

    transform(text.begin(), text.end(), back_inserter(cipher),
        [](char c) {
            return c == ' ' ? c : (((c - 'a') + 3) % 26) + 'a';
        }
    );

    cout << cipher << endl;

    return 0;
}