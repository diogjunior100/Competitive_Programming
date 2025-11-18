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

    stack<string> st;
    string s; ll n;

    cin >> n;
    cin >> s;

    ll prefix = 0;
    for (auto c : s){
        if (c == '('){
            st.push("(");
        } else if (c == ')'){
            if (st.empty()){
                prefix++;
            } else {
                st.pop();
            }
        }
    }

    cout << string(prefix, '(') << s << string(st.size(), ')') << "\n";

    return 0;
}