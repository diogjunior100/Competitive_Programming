#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

const ll oo = {1000000000000000010LL};
const ll MAX = {200010};

bool is_vowel(char c) {
    string vowels = {"aeiou"};

    return vowels.find(tolower(c)) != string::npos;
}

string filter_vowels(const string& s) {
    string v;

    for (auto c : s) {
        if (is_vowel(c)){
            v.push_back(c);
        }
    }

    return v;
}

string filter_vowels_new (const string& s) {
    string v;

    copy_if(s.begin(), s.end(), back_inserter(v),
        [](char c) {
            string vowels = {"aeiou"};

            return vowels.find(tolower(c)) != string::npos;
        }
    );

    return v;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s = "Teste de mapeamento";
    cout << filter_vowels(s) << endl;
    cout << filter_vowels_new(s) << endl;

    return 0;
}