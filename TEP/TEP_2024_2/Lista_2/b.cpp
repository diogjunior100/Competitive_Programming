#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

const ll oo = {1000000000000000010LL};
const ll MAX = {200010};

bool is_anagram (string s, string t) {
    //string a(s), b(t);

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    return s == t;
}

void solve (vector<string> vtr) {
    int sum = 0;
    for (int i = 0; i < vtr.size(); i++){
        for (int j = i + 1; j < vtr.size(); j++){
            if (is_anagram(vtr[i], vtr[j]) == true ) {
                sum++;
            }
        }        
    }
    
    cout << sum << endl;
    
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<string> vtr;
    string s;

    while (n != 0){
        cin >> s;
        vtr.push_back(s);
        n--;
    }

    solve(vtr);
    

    return 0;
}