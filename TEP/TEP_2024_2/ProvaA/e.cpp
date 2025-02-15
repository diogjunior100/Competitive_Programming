#include <bits/stdc++.h>

using namespace std;

//deve iniciar com letras ou underscore;
//só pode conter números, letras e underscores;
//não pode ser uma das palavras reservadas da linguagem.

int main () {
    int n;
    string s;

    vector<string> reservadas = {"auto", "break", "continue", "case",
        "do", "else", "for", "goto",
        "if", "int", "double", "float",
        "void", "char", "switch", "default",
        "while", "volatile", "const", "short",
        "long", "static", "extern", "signed",
        "unsigned", "sizeof", "typedef", "struct",
        "union", "return", "enum", "register"};

    
    cin >> n;
    int result = 1;

    while (n > 0)
    {
        cin >> s;

        if(!isalpha(s[0]) && s[0] != '_') {
            result = 0;
        } 

        for (auto x : s){
            if (!isalnum(x) && x != '_') {
                result = 0;
            }
        }

        for (auto i = 0; i < reservadas.size(); i++){
            if (reservadas[i] == s) {
                result = 0;
            }
        }
        
        cout << (result == 1 ? "Sim" : "Nao") << endl;
        n--;
    }
    
    return 0;
}