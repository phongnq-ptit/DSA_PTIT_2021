#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node *left, *right;
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* constructor_tree(int n){
    int root = -1, dad, child; char pos;
    map<int, Node*> mp;

    while(n--){
        cin>>dad>>child>>pos;

        if(root == -1) root = dad;

        if(mp.find(dad) == mp.end()) {
            Node *tmp = new Node(dad);
            mp[dad] = tmp;
        }

        Node *node_dad = mp[dad];
        Node *node_child = new Node(child);

        if(pos == 'L') node_dad->left = node_child;
        else node_dad->right = node_child;

        mp[child] = node_child;
    }

    return mp[root];
}

vector<int> level;
void level_order(Node *tree, int lv){
    if(tree != NULL){
        if(tree->left == NULL && tree->right == NULL)
            level.push_back(lv);
        level_order(tree->left, lv + 1);
        level_order(tree->right, lv + 1);
    }
}

void solve(){
    level.clear();
    int n; cin>>n;

    Node *tree = constructor_tree(n);

    level_order(tree, 1);

    for(int val: level){
        if(val != level[0]){
            cout<<0<<endl;
            return;
        }
    }
    cout<<1<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int a; cin>>a;
    while(a--) solve();
    return 0;
}