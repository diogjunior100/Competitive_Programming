#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

const ll oo = {1000000000000000010LL};
const ll MAX = {200010};
const ll MAX_STR = {256};
unsigned char table[MAX_STR];

string cipher (const string& text) {
    string res;

    transform(text.begin(), text.end(), back_inserter(res),
        [](char c) { return table[(int) c]; }
    );

    return res;
}

void fill_table (unsigned char key) {
    for (int i = 0; i < MAX_STR; ++i){
        table[i] = (unsigned char) i ^ key;
    }   
}

string decipher(const string& c) {
    return cipher(c);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    fill_table(0x3B);

    string message { "Xor cipher example" };
    string c = cipher(message);

    printf("c = ");
    
    for (size_t i = 0; i < c.size(); ++i){
        printf("%02x%c", c[i], (i + 1 == c.size() ? '\n' : ' '));
    }

    string d = decipher(c);

    printf("d = [%s]\n", d.c_str());
    
    return 0;
}