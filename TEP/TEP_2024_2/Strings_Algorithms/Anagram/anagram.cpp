#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

const ll oo = {1000000000000000010LL};
const ll MAX = {200010};

bool is_string (const string& s, const string& t) {
    string a(s), b(t);

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    return a == b;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cout << ((is_string("iracema", "america")) ? "Yes" : "No") << endl; 
    cout << ((is_string("roma", "amora")) ? "Yes" : "No") << endl;

    return 0;
}