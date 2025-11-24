#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

const ll oo = {1000000000000000010LL};
const ll MAX = {200010};

struct BST {
    struct Node{
        ll info;
        Node *left, *right;
    };

    Node *root;

    BST() : root(nullptr) {}

    void BFS() const{
        vector<ll> xs;
        queue<Node *> q;

        q.push(root);

        while (not q.empty()) {
            auto node = q.front();
            q.pop();

            if (node){
                xs.push_back(node->info);
                q.push(node->left);
                q.push(node->right);
            }
        }

        for (size_t i = 0; i < xs.size(); ++i){
            cout << xs[i] << (i+1 == xs.size() ? '\n' : ' ');
        }
        cout << '\n';
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

        while (n--){
            ll info;
            cin >> info;
            tree.insert(info);
        }

        cout << "Case " << test << ":\n";
        tree.BFS();
    }

    return 0;
}