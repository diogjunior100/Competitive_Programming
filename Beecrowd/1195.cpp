#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

const ll oo = {1000000000000000010LL};
const ll MAX = {200010};

struct BST {
    struct Node {
        ll info;
        Node *left, *right;
    };

    Node *root;

    BST () : root(nullptr) {}

    void inorder (const Node* node) const
    {
        if (node) {
            inorder(node->left);
            cout << ' ' << node->info;
            inorder(node->right);
        }
    }

    void preorder(const Node* node) const {
        if (node) {
            cout << ' ' << node->info;
            preorder(node->left);
            preorder(node->right);
        }
    }

    void postorder(const Node* node) const {
        if (node) {
            postorder(node->left);
            postorder(node->right);
            cout << ' ' << node->info;
        }
    }

    void insert (ll info){
        Node **node = &root;

        while (*node){
            if ((*node)->info == info)
                return;
            else if (info < (*node)->info)
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

    ll c;
    cin >> c;

    for (ll test = 1; test <= c; ++test){
        ll n;
        cin >> n;

        BST tree;

        while (n--) {
            ll info;
            cin >> info;

            tree.insert(info);
        }

        cout << "Case " << test << ":\n";

        cout << "Pre.:";
        tree.preorder(tree.root);
        cout << "\n";

        cout << "In.:";
        tree.inorder(tree.root);
        cout << "\n";

        cout << "Post:";
        tree.postorder(tree.root);
        cout << "\n\n";
    }


    return 0;
}