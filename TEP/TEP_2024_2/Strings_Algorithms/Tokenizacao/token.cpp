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

    istringstream is("123.456.789-10");
    string token;

    getline(is, token, '.');
    cout << token << endl; 

    getline(is, token, '.');
    cout << token << endl;

    getline(is, token, '-');
    cout << token << endl;

    return 0;
}