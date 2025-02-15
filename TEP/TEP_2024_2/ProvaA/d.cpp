#include <bits/stdc++.h>

using namespace std;

map<char, int> histogram(const string& s) {
    map<char, int> h1;

    for (auto c : s) {
        ++h1[c];
    }
    return h1;
}

int main () {
    int n;
    cin >> n;

    string s;
    cin >> s;

    map<char, int> h;

    h = histogram(s);

    /*for (auto p : h) {
        cout << p.first << " -> " << p.second << endl;
    }*/

    if ((n % 2 == 0)) {
        for (auto p : h) {
            if (p.second%2) {
                cout << "Nao" << endl;
                return 0;
            }
        }
        cout << "Yes" << endl;
    } else {
        for (auto p : h) {
            if (p.second != 2 && p.second != 1) {
                cout << "Nao" << endl;
                return 0;
            }
        }
        cout << "Sim" << endl;
    }
    
    return 0;
}