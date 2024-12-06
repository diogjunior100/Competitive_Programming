#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

const ll oo = {1000000000000000010LL};
const ll MAX = {200010};

bool solve (string s) {
    for (char i = 'a'; i <= 'z'; i++)
    {
        bool found = false;

        for (int j = 0; j < s.length(); j++){
            if (i == tolower(s[j])){
                found = true;
                break;
            }
            
        }
        
        if(found == false){
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
    int n;
    cin >> n >> s;

    cout << (solve(s) ? "YES" : "NO") << endl;

    return 0;
}