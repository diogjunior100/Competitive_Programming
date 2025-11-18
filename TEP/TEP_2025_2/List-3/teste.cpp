#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n;     // lê o tamanho da string
    cin >> s;     // lê a string de 0s e 1s

    stack<int> pilha;

    // empilha cada dígito convertido para inteiro
    for (char c : s) {
        pilha.push(c - '0');  // '0' → 0, '1' → 1
    }

    // mostra o conteúdo da pilha
    cout << "Conteúdo da pilha:" << endl;
    while (!pilha.empty()) {
        cout << pilha.top() << endl;
        pilha.pop();
    }

    return 0;
}
