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

    queue<string> q;

    q.push("um");
    q.push("dois");
    q.push("tres");

    cout << "Vazia? " << q.empty() << "\n";

    cout << "Primeiro elemento " << q.front() << "\n";
    cout << "Ultimo elemento " << q.back() << "\n";

    q.push("quatro");

    cout << "Tamanho da fila: " << q.size() << "\n";

    q.pop();

    queue<string> temp_q = q;

    cout << "Conteudo da fila: ";
    while (!temp_q.empty()) {
        cout << temp_q.front() << " ";
        temp_q.pop();
    }
    cout << "\n";

    cout << "Primeiro elemento: " << q.front() << '\n';

    return 0;
}