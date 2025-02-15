#include <bits/stdc++.h>

using namespace std;

int main () {
    int n;
    string s;
    string vogais = "aeiou";
    cin >> n;
    getline(cin, s);

    for (int i = 0; i < n; i++)
    {
        getline(cin, s);
        int j = 0;

        for(auto x : s) {
            cout << x;
            if (isalpha(x)) {
                cout << vogais[j];
                j++;

                if (j == 5){
                    j = 0;
                }
                
            }
        }
        cout << endl;   
    }
    

    return 0;
}