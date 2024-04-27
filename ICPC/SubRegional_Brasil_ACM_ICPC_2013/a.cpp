#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;
using ii = pair<ll, ll>;
const ll MAX = 200010;
 
int main() {
 
    ll a, b, c;
    
    while(cin >> a >> b >> c){
        if((a != b) && (a != c)){
            cout << "A" << endl;
        }
        else if ((b != a) && (b != c)){
            cout << "B" << endl;
        }
        else if((c != a) && (c != b)){
            cout << "C" << endl;
        }
        else{
            cout << "*" << endl;
        }
    }
 
    return 0;
}