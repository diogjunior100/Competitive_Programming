#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

const ll oo = {1000000000000000010LL};
const ll MAX = {200010};

bool is_palindrome (const string& s){
    size_t N = s.size();

    for (size_t i = 0; i < N/2; ++i)
    {
        if (s[i] != s[N - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;

    cin >> s;

    cout << (is_palindrome(s) ? "Yes" : "No") << endl;

    return 0;
}