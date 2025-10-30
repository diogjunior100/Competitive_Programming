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

    list<int> list;
    
    cout << "Lista vazia " << (list.empty() ? "Sim" : "Nao") << endl;

    for (int n = 1; n <= 10; ++n){
        list.push_front(n);        
    }

    list.pop_front();

    int size = distance(list.begin(), list.end());

    cout << "Tamanho da Lista: " << size << endl;

    cout << "Primeiro elemento: " << list.front() << endl;

    int last = -1;

    for (auto it = list.begin(); it != list.end(); ++it){
        last = *it;
    }

    cout << "Ultimo elemento: " << last << endl;

    list.reverse();

    for (auto it = list.begin(); it != list.end(); ++it){
        cout << *it << endl;
    }


    return 0;
}