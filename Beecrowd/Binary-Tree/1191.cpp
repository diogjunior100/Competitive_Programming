#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

const ll oo = {1000000000000000010LL};
const ll MAX = {200010};

struct BST {
    struct Node {
        char info;
        Node *left, *right;
    };

    Node *root;

    BST() : root(nullptr) {}

    void postorder (const Node* node) const {
        if (node) {
            postorder(node->left);
            postorder(node->right);
            cout << node->info;
        }
    }

    void insert (char info, const ll rank[]){
        Node **node = &root;

        while (*node){
            if ((*node)->info == info)
                return; 
            else if (rank[info - 'A'] < rank[(*node)->info - 'A'])
                node = &(*node)->left;
            else
                node = &(*node)->right;
        }

        *node = new Node { info, nullptr, nullptr};
    }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string preorder, inorder;

    while (cin >> preorder >> inorder)
    {
        ll rank[30], nxt = 1;

        for (const auto& c : inorder){
            rank[c - 'A'] = nxt++;
        }

        BST tree;

        for (const auto& c : preorder){
            tree.insert(c, rank);
        }

        tree.postorder(tree.root);
        cout << "\n";
    }
    


    return 0;
}