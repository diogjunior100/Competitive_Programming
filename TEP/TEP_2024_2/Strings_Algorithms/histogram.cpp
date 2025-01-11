#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

const ll oo = {1000000000000000010LL};
const ll MAX = {200010};

map<char, int> histogram(const string& s){
    map<char, int> h;

    for (auto c : s) {
        ++h[c];
    }

    return h;
}

void histogram_2(int h[256], const string& s) {
    memset(h, 0, sizeof h);

    for (auto c : s) {
        ++h[c];
    }
}

void histogram_3(int h[256], const string& s) {
    memset(h, 0, sizeof h);

    for (auto c : s)
    {
        ++h[c - 'A'];
    }
    
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    return 0;
}